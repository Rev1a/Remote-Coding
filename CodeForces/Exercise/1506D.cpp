#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{   
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> cnt;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    int mx = 0;
    for (auto &p : cnt) mx = max(mx, p.second);

    int ans;
    if (mx <= n / 2) ans = n % 2;
    else ans = 2 * mx - n;

    cout << ans << "\n";
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}