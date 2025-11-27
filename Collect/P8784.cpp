#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0] = 1;
    ll sum = 0;
    for(int i=1;i<=n;i++)
    {
        if(i>=3)
        {
            sum = (sum + dp[i-3]) % MOD;
        }
        if(i==1) dp[i] = dp[i-1];
        else
        {
            dp[i] = (dp[i-1] + dp[i-2] + sum*2) % MOD;
        }
    }
    cout<<dp[n]<<"\n";
    return 0;
}