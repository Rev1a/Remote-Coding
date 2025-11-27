#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,ans;
vector<ll> a;
bool check(ll x)
{
    ll cnt = 0;

    for(int i=1;i<=n;i++)
    {
        cnt += (a[i] / x); 
    }

    return cnt >= k;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>k;

    a.resize(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    ll l = 1;
    ll r = *max_element(a.begin(),a.end());

    while(l <= r)
    {
        ll mid =(l + r) >> 1;
        if(check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }   
    cout<<ans<<"\n";
    return 0;
}