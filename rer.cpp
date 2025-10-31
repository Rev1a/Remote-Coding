#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll X;
        cin >> n >> X;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // ✅ 核心排序规则：
        // 1. 先按 a[i] % X 降序
        // 2. 若相同，则按 a[i] 升序
        sort(a.begin(), a.end(), [&](ll x, ll y) {
            if (x % X != y % X) return x % X > y % X;
            return x < y;
        });

        ll S = 0, prevL = 0, bonus = 0;
        for (ll p : a) {
            ll newL = (S + p) / X;
            if (newL > prevL) bonus += p;
            S += p;
            prevL = newL;
        }

        cout << bonus << "\n";
        for (int i = 0; i < n; ++i)
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
