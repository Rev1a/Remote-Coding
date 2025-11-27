#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll ans;
vector<ll> a;
bool check(ll x)
{   
    ll sum = 0;
    ll cnt = 1;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum > x)
        {
            sum = a[i];
            cnt++;
        }
    }
    return cnt <= m;
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
    
    ll l = *max_element(a.begin()+1, a.end()); 
    ll r = accumulate(a.begin()+1, a.end(), 0LL);

    while(l<=r)
    {
        ll mid = (l + r) >> 1;
        if(check(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}