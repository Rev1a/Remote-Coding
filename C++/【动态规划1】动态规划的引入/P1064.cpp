#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    int dp[30005]={0};
    dp[0]=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        for(int j=m;j>=c;j--)
        {
            dp[j]+=dp[j-c];
        }
    }
    cout<<dp[m];
    return 0;
}