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
    while (b > 0) {
        if (b & 1) {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

i64 inv(i64 a) {
    return pw(a, MOD - 2);
}

const int MAXN = 2e5 + 5;
std::vector<int> fac, invfac;

void init() {
    fac.resize(MAXN), invfac.resize(MAXN);
    fac[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fac[i] = 1LL * fac[i - 1] * i % MOD;
    }
    invfac[MAXN - 1] = inv(fac[MAXN - 1]);
    for (int i = MAXN - 2; i >= 0; i--) {
        invfac[i] = 1LL * invfac[i + 1] * (i + 1) % MOD;
    }
}

i64 binom(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    return 1LL * fac[n] * invfac[k] % MOD * invfac[n - k] % MOD;
}

void solve() {
    int n, a, b;
    std::cin >> n >> a >> b;
    i64 p = a * inv(b) % MOD, q = (1 - p + MOD) % MOD;
    i64 ans = 0, pp = pw(p, n), qq = 1;
    for (int i = 0; i < n; i++, qq = qq * q % MOD) {
        ans = (ans + binom(n - 1 + i, n - 1) * pp % MOD * qq % MOD) % MOD;
    }
    std::cout << ans << '\n';
}

} // namespace skadi

int main() {
#ifndef LOCAL_DEBUG
    std::cin.tie(nullptr)->sync_with_stdio(false);
#endif
    skadi::init();
    int t = 1;
    std::cin >> t;
    while (t--) {
        skadi::solve();
    }
    return 0;
}
