#include <bits/stdc++.h>
using i64 = long long;
using f80 = long double;
void work() {
    int n;
    std::cin >> n;
    std::cout << ((n / 2) % 2 == 0) << "\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << (i + j) % n + 1 << " \n"[j == n - 1];
        }
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