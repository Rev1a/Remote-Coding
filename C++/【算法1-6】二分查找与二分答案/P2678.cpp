#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll L,N,M;
ll ans;
vector<ll> a;
bool check(ll x)
{
    ll tot = 0;
    ll i = 0;
    ll now = 0;
    while(i < N+1)
    {
        i++;
        if(a[i] - a[now] < x)
        {
            tot++;
        }
        else
        {
            now = i;
        }
    }
    if(tot > M)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>L>>N>>M;
    a.resize(N+2);
    for(int i=1;i<=N;i++)
    {
        cin>>a[i];
    }
    a[N+1] = L;
    ll l = 1;
    ll r = L;
    while(l<=r)
    {   
        ll mid = (l+r) >> 1;
        if(check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid -1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}