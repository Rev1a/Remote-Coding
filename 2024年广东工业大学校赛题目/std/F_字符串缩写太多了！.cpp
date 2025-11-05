#include <bits/stdc++.h>
#include <string>
#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define dbg(...) (void)0
#endif
using u32 = unsigned int;
using i64 = long long;

namespace skadi {

const int MOD = 1e9 + 7;

void solve() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        static std::string s;
        std::cin >> s;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = 1LL * (ans + 1) * i % MOD;
    }
    std::cout << ans << '\n';
}

} // namespace skadi

int main() {
#ifndef LOCAL_DEBUG
    std::cin.tie(nullptr)->sync_with_stdio(false);
#endif
    int t = 1;
    // std::cin >> t;
    while (t--) {
        skadi::solve();
    }
    return 0;
}
