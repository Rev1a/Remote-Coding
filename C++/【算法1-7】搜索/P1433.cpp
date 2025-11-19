#include<bits/stdc++.h>
using namespace std;

int n;
double ans = 1e18;
int v[20]; 
double a[20],b[20],dp[65000][17];
long double distance(int x,int y)
{
    return sqrt( (a[x]-a[y])*(a[x]-a[y]) + (b[x]-b[y])*(b[x]-b[y]) );
}
void dfs(int p,int cur,double s,int bi)
{   
    if(s > ans)return;
    if(p == n)
    {
        ans = min (ans,s);
        return;
    }
    for(int i=1;i<=n;i++)
    {   
        if(!v[i])
        {   
            int t = bi + (1<<(i-1));
            if(dp[t][i]!=0 && dp[t][i] <= s + distance(cur,i))
            {
                continue;
            }
            v[i] = 1;
            dp[t][i] = s +distance(cur,i);
            dfs( p+1 ,i,dp[t][i],t);
            v[i] = 0;
        }
    }
  
} 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<(1<<n); i++)
        for(int j=0; j<=n; j++)
            dp[i][j] = 1e18;
    dfs(0,0,0,0);
    cout<<fixed<<setprecision(2)<<ans<<"\n";
    return 0;
}