#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
ll ans,n,m;
bool check(ll x)
{
    ll last = a[1];
    ll cnt = 1;
    for(int i=2;i<=n;i++)
    {
        if(a[i] - last >= x)
        {
            cnt++;
            last = a[i];
        }
    }
    if(cnt >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;

    a.resize(n+1);
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin()+1,a.end());

    ll l = 1;
    ll r = a[n] - a[1];

    while(l<=r)
    {
        ll mid = (l + r) >> 1;
        if(check(mid))
        {
            ans = mid ;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout<<ans;
}