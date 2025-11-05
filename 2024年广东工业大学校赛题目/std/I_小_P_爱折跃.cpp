#include <bits/stdc++.h>
#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define dbg(...) (void)0
#endif
using u32 = unsigned int;
using i64 = long long;

namespace skadi {

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        --a[i];
    }

    std::vector<int> vis(n);

    int ans = -1;
    auto dfs = [&](auto&& self, int u) -> bool {
        if (vis[u]) {
            ans++;
            return true;
        }
        vis[u] = 1;
        return self(self, a[u]);
    };

    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            dfs(dfs, i);
        }
    }

    std::cout << ans << '\n';
}

} // namespace skadi

int main() {
#ifndef LOCAL_DEBUG
    std::cin.tie(nullptr)->sync_with_stdio(false);
#endif
    int t = 1;
    std::cin >> t;
    while (t--) {
        skadi::solve();
    }
    return 0;
}
