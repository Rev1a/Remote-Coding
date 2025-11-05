#include <bits/stdc++.h>
using i64 = long long;
void work() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n + 1), f(n + 1);
    std::vector<std::vector<int>> to(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        int u, v;
        std::cin >> u >> v;
        ++f[v];
        to[u].push_back(v);
    }
    for (int i = 1; i <= n; ++i) {
        if (f[i]) {
            continue;
        }
        ++f[i];
        to[0].push_back(i);
    }
    std::vector<i64> dp(n + 1);
    auto check = [&](int k) {
        auto d = f;
        dp.assign(n + 1, 0);
        dp[0] = k;
        std::vector<int> que{0};
        int now = 0;
        while (now < int(que.size())) {
            int x = que[now];
            ++now;
            for (auto y : to[x]) {
                if (dp[x] >= a[y]) {
                    dp[y] = std::max(dp[y], dp[x] + a[y]);
                } else {
                    dp[y] = std::max(dp[y], dp[x] * 2 - a[y]);
                }
                --d[y];
                if (!d[y]) {
                    que.push_back(y);
                }
            }
        }
        return dp[n];
    };
    int l = 1, r = 1e9, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (check(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    if (check(l)) {
        std::cout << l << "\n";
    } else {
        std::cout << r << "\n";
    }
    return;
}
void init() {
}
int main() {
    init();
    std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr), std::cout.tie(nullptr);
    int t = 1;
    // std::cin >> t;
    while (t--) {
        work();
    }
    return 0;
}
/*

*/