#include<bits/stdc++.h>
using namespace std;   

int n,m,t;
int ans=0;    
bool vis[10][10]={0};
bool block[10][10]={0};
int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};   
int sx,sy,ex,ey;
int cnt = 0;
void dfs(int x,int y)
{
    if(x==ex && y==ey)
    {
        cnt++;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if( nx>=1 && nx<=n && ny>=1 && ny<=m && !vis[nx][ny] && !block[nx][ny])
        {
            vis[nx][ny] = 1;
            dfs(nx,ny);
            vis[nx][ny] = 0;  
        }
    }
  
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m>>t; 

    cin>>sx>>sy>>ex>>ey;
   
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        block[a][b] = 1;
    }
    vis[sx][sy] = 1;
    dfs(sx,sy);
    cout<<cnt<<"\n";
    return 0;
}