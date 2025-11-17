#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll max_val = 0, max_idx = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
    }

    // 将数组从最大值位置开始线性化
    vector<ll> b;
    for(int i = 0; i < n; i++)
        b.push_back(a[(max_idx + i) % n]);

    ll ans = 0;
    stack<ll> st;
    st.push(b[0]);

    for(int i = 1; i < n; i++) {
        ll cur = b[i];
        while(!st.empty() && st.top() <= cur) {
            ans += st.top();
            st.pop();
        }
        st.push(cur);
    }

    while(st.size() > 1) {
        ans += st.top();
        st.pop();
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
