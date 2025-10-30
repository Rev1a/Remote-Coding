// rotating_pink_heart.cpp
// A self-contained SFML program that draws a rotating pink heart that adapts to window size
// Features: responsive heart scaling, rotation, glow layers, subtle pulsing, and small particle sparkles
// Requires SFML 2.x (libsfml-graphics, libsfml-window, libsfml-system)
// Compile (on Linux):
// g++ rotating_pink_heart.cpp -o rotating_pink_heart -lsfml-graphics -lsfml-window -lsfml-system -std=c++17

#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>
#include <random>

struct Particle {
    sf::CircleShape shape;
    float angle;      // angular position around heart center
    float radius;     // distance from center
    float speed;      // angular speed
    float life;       // remaining life (0..1)
};

// Parametric heart curve (classic)
// t in [0, 2pi]
static sf::Vector2f heartPoint(float t) {
    float x = 16.0f * std::pow(std::sin(t), 3);
    float y = 13.0f * std::cos(t) - 5.0f * std::cos(2*t) - 2.0f * std::cos(3*t) - std::cos(4*t);
    return {x, -y}; // flip y so heart points upward visually
}

// Build a convex shape approximating the heart by sampling parametric curve
static sf::ConvexShape makeHeartShape(unsigned samples, float scale, const sf::Color& color) {
    sf::ConvexShape shape;
    shape.setPointCount(samples);
    float minX = 1e9, minY = 1e9, maxX = -1e9, maxY = -1e9;
    for (unsigned i = 0; i < samples; ++i) {
        float t = (float)i / samples * 2.0f * 3.14159265358979323846f;
        sf::Vector2f p = heartPoint(t);
        minX = std::min(minX, p.x);
        minY = std::min(minY, p.y);
        maxX = std::max(maxX, p.x);
        maxY = std::max(maxY, p.y);
        shape.setPoint(i, p);
    }
    // normalize and scale points so that bounding box is roughly [-1,1] in both axes, then multiply by scale
    sf::FloatRect bbox(minX, minY, maxX - minX, maxY - minY);
    float cx = bbox.left + bbox.width/2.0f;
    float cy = bbox.top + bbox.height/2.0f;
    for (unsigned i = 0; i < samples; ++i) {
        sf::Vector2f p = shape.getPoint(i);
        float nx = (p.x - cx) / std::max(bbox.width, bbox.height);
        float ny = (p.y - cy) / std::max(bbox.width, bbox.height);
        shape.setPoint(i, {nx * scale, ny * scale});
    }
    shape.setFillColor(color);
    // We'll set origin later to center (0,0 is already center due to normalization)
    return shape;
}

int main() {
    // Create window
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(1000, 700), "Rotating Pink Heart", sf::Style::Default, settings);
    window.setVerticalSyncEnabled(true);

    const unsigned samples = 320; // heart resolution
    // Base heart shape at unit scale; we'll scale dynamically based on window
    sf::ConvexShape baseHeart = makeHeartShape(samples, 1.0f, sf::Color::Transparent);

    // Colors
    sf::Color pink(255, 95, 160);
    sf::Color softPink(255, 140, 185);

    // Particles
    std::vector<Particle> particles;
    std::mt19937 rng((unsigned)std::random_device{}());
    std::uniform_real_distribution<float> angDist(0.0f, 2.0f * 3.1415926f);
    std::uniform_real_distribution<float> radDist(0.2f, 0.7f);
    std::uniform_real_distribution<float> speedDist(-1.0f, 1.0f);
    std::uniform_real_distribution<float> sizeDist(1.5f, 4.5f);
    std::uniform_real_distribution<float> lifeDist(0.6f, 1.0f);

    auto spawnParticle = [&](float heartScale){
        Particle p;
        p.angle = angDist(rng);
        p.radius = radDist(rng) * heartScale;
        p.speed = speedDist(rng) * 0.6f;
        p.life = lifeDist(rng);
        p.shape.setRadius(sizeDist(rng));
        p.shape.setOrigin(p.shape.getRadius(), p.shape.getRadius());
        sf::Uint8 alpha = (sf::Uint8)(160 + 95 * (1 - p.radius/heartScale));
        p.shape.setFillColor(sf::Color(255, 220, 240, alpha));
        particles.push_back(p);
    };

    sf::Clock clock;
    float rotation = 0.0f;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
            if (event.type == sf::Event::Resized) {
                // maintain aspect ratio by resetting view
                sf::FloatRect visibleArea(0, 0, (float)event.size.width, (float)event.size.height);
                window.setView(sf::View(visibleArea));
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) window.close();
            }
        }

        float elapsed = clock.restart().asSeconds();
        rotation += 30.0f * elapsed; // degrees per second

        // compute center and scale based on window size
        sf::Vector2u ws = window.getSize();
        float minSide = std::min((float)ws.x, (float)ws.y);
        // heart base scale: occupies about 40% of min side
        float baseScale = minSide * 0.40f;

        // pulsing effect
        float timeNow = (float)sf::Clock().getElapsedTime().asSeconds();
        // Note: we created a new Clock above and restarted it; to keep a continuous time, use a static clock instead.
        static sf::Clock globalClock;
        float t = globalClock.getElapsedTime().asSeconds();
        float pulse = 1.0f + 0.03f * std::sin(t * 2.0f * 3.1415926f * 0.8f);
        float heartScale = baseScale * pulse;

        // Build heart for this frame by copying baseHeart and adjusting points scaled by heartScale
        sf::ConvexShape heart = baseHeart;
        for (unsigned i = 0; i < heart.getPointCount(); ++i) {
            sf::Vector2f p = heart.getPoint(i);
            heart.setPoint(i, {p.x * heartScale, p.y * heartScale});
        }
        heart.setOrigin(0.0f, 0.0f); // our normalized curve is centered at origin
        sf::Vector2f center((float)ws.x / 2.0f, (float)ws.y / 2.0f + heartScale*0.06f);
        heart.setPosition(center);
        heart.setRotation(rotation);

        // Glow layers: draw multiple enlarged, transparent hearts for bloom
        std::vector<float> glowScales = {1.18f, 1.08f, 1.02f};
        std::vector<sf::Uint8> glowAlpha = {55, 95, 150};

        // update and spawn particles
        // keep particle count proportional to window size
        size_t target = (size_t)(minSide * 0.06f); // e.g., ~60 for 1000px
        if (particles.size() < target) {
            for (size_t i = 0; i < target - particles.size(); ++i) spawnParticle(heartScale);
        }

        for (auto &p : particles) {
            p.angle += p.speed * elapsed;
            p.radius *= (1.0f + 0.02f * elapsed); // slowly drift outward
            p.life -= elapsed * 0.12f; // fade over time
        }
        // remove dead and respawn
        particles.erase(std::remove_if(particles.begin(), particles.end(), [](const Particle& p){ return p.life <= 0.0f || p.radius > 3.0f; }), particles.end());

        // Draw
        window.clear(sf::Color(20, 12, 30)); // deep background

        // draw glow layers
        for (size_t gi = 0; gi < glowScales.size(); ++gi) {
            sf::ConvexShape g = baseHeart;
            float s = glowScales[gi] * heartScale;
            for (unsigned i = 0; i < g.getPointCount(); ++i) {
                sf::Vector2f p = g.getPoint(i);
                g.setPoint(i, {p.x * s, p.y * s});
            }
            g.setPosition(center);
            sf::Color c = softPink;
            c.a = glowAlpha[gi];
            g.setFillColor(c);
            g.setRotation(rotation + (float)gi * 1.5f);
            window.draw(g);
        }

        // main heart with gradient-ish effect: we draw two overlapping hearts with slight offset
        sf::ConvexShape mainHeart = heart;
        mainHeart.setFillColor(pink);
        window.draw(mainHeart);

        sf::ConvexShape highlight = heart;
        highlight.setScale(0.985f, 0.985f);
        sf::Color hl(255, 170, 200, 120);
        highlight.setFillColor(hl);
        highlight.setRotation(rotation + 8.0f);
        window.draw(highlight);

        // small shine: a small rotated light overlay
        sf::ConvexShape shine = heart;
        shine.setScale(0.5f, 0.5f);
        shine.setPosition(center + sf::Vector2f(heartScale*0.15f, -heartScale*0.28f));
        shine.setRotation(rotation * 1.2f);
        shine.setFillColor(sf::Color(255, 255, 255, 45));
        window.draw(shine);

        // draw particles
        for (auto &p : particles) {
            float alpha = std::max(0.0f, p.life);
            sf::Vector2f pos = center + sf::Vector2f(std::cos(p.angle), std::sin(p.angle)) * p.radius;
            p.shape.setPosition(pos);
            sf::Color col = p.shape.getFillColor();
            col.a = (sf::Uint8)(255 * std::min(1.0f, alpha));
            p.shape.setFillColor(col);
            window.draw(p.shape);
        }

        // subtle vignette (drawn as dark translucent rectangle with circular hole is complex; we do a translucent overlay)
        sf::RectangleShape overlay(sf::Vector2f((float)ws.x, (float)ws.y));
        overlay.setFillColor(sf::Color(0, 0, 0, 18));
        window.draw(overlay);

        window.display();
    }

    return 0;
}
