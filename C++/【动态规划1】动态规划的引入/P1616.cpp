#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>m>>n;
    vector<ll> dp(m+5,0);
    for(int i=1;i<=n;i++)
    {
        ll w,c;
        cin>>w>>c;
        for(int j=w;j<=m;j++)
        {
            dp[j] = max(dp[j],dp[j-w]+c);
        }
    }
    cout<<dp[m];
    return 0;
}