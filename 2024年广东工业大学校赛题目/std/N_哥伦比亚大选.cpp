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
    std::string name;
    int ans = 0;
    while (n--) {
        static std::string s;
        int cnt = 0;
        std::cin >> s >> cnt;
        if (cnt > ans) {
            ans = cnt;
            name = s;
        }
    }
    std::cout << name << '\n';
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
