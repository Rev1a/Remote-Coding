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

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(n), c(n);
    for (int i = 0; i < m; i++) {
        int op, x;
        std::cin >> op >> x, x--;
        if (op == 1) {
            a[x] += 1;
        } else {
            b[x] += 1;
            c[x] += 1;
        }
    }
    for (int i = 1; i < n; i++) {
        a[i] = (a[i] + a[i - 1]) % MOD;
        b[i] = (b[i] + b[i - 1]) % MOD;
        c[i] = (c[i] + c[i - 1]) % MOD;
    }
    for (int i = 1; i < n; i++) {
        a[i] = (a[i] + a[i - 1]) % MOD;
        b[i] = (b[i] + b[i - 1]) % MOD;
        c[i] = (c[i] + c[i - 1] + 2LL * b[i - 1]) % MOD;
    }
    for (int i = 0; i < n; i++) {
        std::cout << (a[i] + c[i]) % MOD << " \n"[i == n - 1];
    }
}

} // namespace skadi

int main() {
#ifndef LOCAL_DEBUG
    std::ios::sync_with_stdio(false), std::cin.tie(nullptr);
#endif
    int t = 1;
    std::cin >> t;
    while (t--) {
        skadi::solve();
    }
    return 0;
}
