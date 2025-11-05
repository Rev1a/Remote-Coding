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
    i64 ans = n + 1, cur = 0, limit = 1e18;
    for (int i = 0; i < n; i++) {
        i64 l, r;
        std::cin >> l >> r;
        l -= i + 1, r -= i + 1;
        if (r < cur || l > limit) {
            ans = -1;
            break;
        }
        if (cur < l) {
            ans += l - cur;
            cur = l;
        }
        limit = r;
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
