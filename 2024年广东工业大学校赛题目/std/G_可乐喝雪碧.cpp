#include <bits/stdc++.h>
void work() {
    int n, m = 0, tag = 0;
    std::cin >> n;
    std::cin >> m;
    std::vector<int> a(n);
    std::vector<int> dp(n + 1, -1);
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] == -1) {
            ++cnt;
        } else if (a[i] == 0) {
            tag = 1;
        } else {
            ++cnt1;
        }
    }
    if ((cnt && cnt1 >= cnt) || cnt > 4 || cnt == 3 || (cnt == 4 && cnt1)) {
        tag = 1;
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
        if (q && q <= dp[n]) {
            std::cout << "YES\n";
        } else if (q == 0 && tag == 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return;
}
void init() {
}
int main() {
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    init();
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int t = 1;
    std::cin >> t;
    while (t--) {
        work();
    }
    return 0;
}
/*

*/