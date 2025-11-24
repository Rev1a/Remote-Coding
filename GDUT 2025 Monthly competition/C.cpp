#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

constexpr int inf = 1e9;
constexpr int mxn = 5e5;
constexpr int P = 1e9 + 7;

int ask(const vector<int> &arg) {
    cout << "? ";
    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i] << " \n"[i == arg.size() - 1];
    }
    cout << flush;
    int k;
    cin >> k;
    return k;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), ans(n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i] = j;
            int k = ask(a);
            if (k) {
                ans[i] = j;
                break;
            }
        }
        a[i] = 0;
    }

    cout << "! ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    cout << flush;
}

int main() {
    cin.tie(nullptr), ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

