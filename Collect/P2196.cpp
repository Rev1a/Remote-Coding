#include<bits/stdc++.h>
using namespace std;
int a[30],p[30],mp[30][30],dp[30];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i] = a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>mp[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(mp[i][j]==1)
            {
                if(dp[i] < dp[j] + a[i])
                {
                    dp[i] = dp[j] + a[i];
                    p[i] = j;
                }
            }
        }
    }
}