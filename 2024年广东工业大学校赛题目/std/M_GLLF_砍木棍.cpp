#include <bits/stdc++.h>
#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define dbg(...) (void)0
#endif
using u32 = unsigned int;
using i64 = long long;

namespace skadi {

const int MOD = 1e9 + 7;

i64 pw(i64 a, i64 b) {
    i64 res = 1;
    while (b) {
        if (b & 1) {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}


void solve() {
    i64 n;
    std::cin >> n;
    i64 k = n / 2;
    i64 ans = pw(2, n - 1) - n - pw(2, k - 1) * (k + 2) + 2 * (k - 1) + 3;
    ans = (ans % MOD + MOD) % MOD;
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
