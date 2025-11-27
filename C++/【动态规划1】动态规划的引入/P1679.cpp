#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll qpow(ll a,ll b)
{   
    ll res = 1;
    while(b>0)
    {
        if (b & 1)
        {
            res = res * a ;
        }
        a = a * a ;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> a(120);
    int dp[100005];
    memset(dp,63,sizeof(dp));
    dp[0] = 0;
    for(ll i=1;i<=120;i++)
    {
        a[i] = qpow(i,4);
    }
    int m;
    cin>>m;
    for(int i=1;i<=120;i++)
    {
        for(int j=a[i];j<=m;j++)
        {
            dp[j] = min(dp[j],dp[j-a[i]]+1);
        }
    }
    cout<<dp[m];
    return 0;
}