#include <bits/stdc++.h>
using i64 = long long;
void work() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        std::cout << str << "\n";
        if (str == "Tomori") {
            std::cout << "Haruhikage\n";
        }
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    // std::cin.tie(0), std::cout.tie(0);
    int t = 1;
    // std::cin >> t;
    while (t--) {
        work();
    }
    return 0;
}
/*


*/