#include<bits/stdc++.h>
using namespace std;
int a[5];
int b[5][22];
int t;
int dp[2505];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1;i<=4;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=4;i++)
    {
        int sum = 0;
        for(int j=1;j<=a[i];j++)
        {
            cin>>b[i][j];
            sum+=b[i][j];
        }
        for(int j=1;j<=a[i];j++)
        {
            for(int k=sum/2;k>=b[i][j];k--)
            {
                dp[k] = max(dp[k],dp[k-b[i][j]]+b[i][j]);
            }
        }
        t+=sum-dp[sum/2];
        for(int j=1;j<=sum/2;j++)
        {
            dp[j]=0;
        }
    }
    cout<<t;
    return 0;
}