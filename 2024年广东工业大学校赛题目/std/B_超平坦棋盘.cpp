#include <bits/stdc++.h>

const int base = 2;
const int inf = 0x3f3f3f3f;
const int dx[8] = {1, -1, 1, -1, 2, -2, 2, -2};
const int dy[8] = {2, -2, -2, 2, 1, -1, -1, 1};
const int cost[8] = {1, 5, 3, 3, 3, 3, 3, 3};

void solve() {
    int n, m;
    std::cin >> n >> m;
    int sx = base, sy = base, ex = n + base, ey = m + base;
    n += base * 2, m += base * 2;

    auto valid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < m;
    };

    std::vector<int> dis1(n * m, -1), dis2(n * m * 8, -1);

    std::queue<std::pair<int, int>> q;
    q.emplace(ex, ey);
    dis1[ex * m + ey] = 0;
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (valid(nx, ny) && dis1[nx * m + ny] == -1) {
                dis1[nx * m + ny] = dis1[x * m + y] + 1;
                q.emplace(nx, ny);
            }
        }
    }

    std::priority_queue<std::pair<int, int>> pq;
    for (int i = 0; i < 8; i++) {
        int id = (ex * m + ey) * 8 + i;
        dis2[id] = 0;
        pq.emplace(0, id);
    }
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (dis2[u] != -d) {
            continue;
        }
        int x = u / 8 / m, y = u / 8 % m, i = u % 8;
        int fx = x + dx[i], fy = y + dy[i];
        for (int j = 0; j < 8; j++) {
            int id = (fx * m + fy) * 8 + j;
            int val = cost[i ^ j ^ 1];
            if (valid(fx, fy) && (dis2[id] == -1 || dis2[id] > dis2[u] + val)) {
                dis2[id] = dis2[u] + val;
                pq.emplace(-dis2[id], id);
            }
        }
    }

    int ans = inf;
    for (int i = 0; i < 8; i++) {
        int tx = sx + dx[i], ty = sy + dy[i];
        int id = tx * m + ty;
        int tid = id * 8 + (i ^ 1);
        if (valid(tx, ty) && dis1[id] != -1 && dis2[tid] != -1) {
            ans = std::min(ans, dis1[id] + dis2[tid]);
        }
    }

    std::cout << ans + 1 << '\n';
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int t = 1;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
