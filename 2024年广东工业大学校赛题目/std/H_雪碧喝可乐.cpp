#include <bits/stdc++.h>

void work() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    std::vector<int> dp(n + 1, -1);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 1;
        for (int j = 0; j <= std::min(i, 5); ++j) {
            sum *= a[i - j];
            dp[i + 1] = std::max(dp[i + 1], dp[i - j] + sum);
        }
    }
    while (m--) {
        int q;
        std::cin >> q;
        if (q <= dp[n]) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int t = 1;
    std::cin >> t;
    while (t--) {
        work();
    }
    return 0;
}
