#include <bits/stdc++.h>
using i64 = long long;

void solve() {
    int n, m, RT = 1, LF = 2;
    std::cin >> n >> m;
    n *= 2;
    std::vector<std::vector<int>> adj(n), nadj(n);
    std::vector<std::array<int, 2>> loop, ans;
    std::vector<int> deg(n), tag(n), p[2];
    std::vector<std::pair<int, int>> edges(m);

    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;
        ++deg[--u], ++deg[--v];
        edges[i] = { u, v };
    }

    for (int i = 0; i < n ; i++) {
		adj[i].reserve(deg[i]);
	}
	
    for (int i = 0; i < m; i++) {
		auto [u, v] = edges[i];
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

    std::function<void(int)> dfs = [&](int u) {
        while (adj[u].size() && tag[adj[u].back()] == LF) {
            adj[u].pop_back();
        }
        int v = adj[u].back();
        tag[u] = LF, tag[v] = RT;
        nadj[v].push_back(u);
        while (adj[u].size()) {
            v = adj[u].back();
            if (!tag[v] && --deg[v] == 1) {
                dfs(v);
            }
            adj[u].pop_back();
        }
    };

    for (int i = 0; i < n; i++) {
        if (!deg[i]) {
            loop.push_back({i, i});
        } else if (!tag[i] && deg[i] == 1) {
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if (deg[i] && !tag[i]) {
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if (tag[i] != RT) {
            continue;
        }
        int u = i, v = nadj[i].back();
        if (u > v) {
            std::swap(u, v);
        }
        loop.push_back({u, v});
        nadj[i].pop_back();
        for (auto x : nadj[i]) {
            p[x >= i].push_back(x);
        }
    }

    n = loop.size();
    m = std::max(p[0].size(), p[1].size());

    ans.resize(n + m);
    for (int i = 0; i < n; i++) {
        ans[i] = {loop[i][1], loop[(i + 1) % n][0]};
    }

    p[0].resize(m, loop[0][0]);
    p[1].resize(m, loop[0][1]);
    for (int i = 0; i < m; i++) {
        ans[i + n] = {p[1][i], p[0][i]};
    }

    std::cout << n + m << '\n';
    for (auto [u, v] : ans) {
        std::cout << u + 1 << ' ' << v + 1 << '\n';
    }
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int t = 1;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
