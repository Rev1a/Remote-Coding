#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll mid =a[n/2];
    ll dis = 0;
    for(ll i=0;i<n;i++)
    {
        dis += abs(mid - a[i]);
    }
    cout<<dis;
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}