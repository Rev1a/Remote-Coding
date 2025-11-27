#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
ll ans,L,N,K;
bool check(ll x)
{
    ll cnt = 0;
    for(int i=2;i<=N;i++)
    {   
        ll tmp = a[i] - a[i-1];
        if(tmp > x)
        {
            cnt += (tmp - 1)/x;
        }
    }
    return cnt <= K;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>L>>N>>K;
    a.resize(N+1);
    for(int i=1;i<=N;i++)
    {
        cin>>a[i];
    }
    ll l = 1;
    ll r = L;
    while(l <= r)
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
    cout<<ans<<' ';
    return 0;
}