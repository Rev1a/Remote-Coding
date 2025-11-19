#include<bits/stdc++.h>
using namespace std;
int a[105][105]={0};
int dp[105][105]={0};
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0}; 
int ans=0,r,c;
int dfs(int x,int y)
{      
    if(dp[x][y]>0)
    {
        return dp[x][y];
    }
    int maxn = 1;
    for(int i=0;i<4;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=1 && nx<=r && ny>=1 && ny<=c && a[nx][ny]<a[x][y])
        {   
           maxn = max ( maxn , dfs(nx,ny)+1 ) ;
        }
    }
    return dp[x][y] = maxn;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            ans = max ( ans , dfs(i,j) );
        }
    }
    cout<<ans;
    return 0;
}