#include<bits/stdc++.h>
using namespace std; 
char a[105][105];
bool vis[105][105];
int pond = 0 ;
int n,m;
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
void dfs(int x,int y)
{   
    for(int i=0;i<8;i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if( nx>=1 && nx<=n && ny>=1 && ny<=m && !vis[nx][ny] &&a[nx][ny]=='W')
        {   
            vis[nx][ny] = true;
            dfs(nx,ny);
        }
    }
}
int main()
{   
    cin>>n>>m;
    for(int i=0;i<n+2;i++)
    {
        a[i][ 0 ]  = '.';
        a[i][m+1]  = '.';
    }
    for(int i=0;i<m+2;i++)
    {
        a[n+1][i] = '.';
        a[ 0 ][i]   = '.';
    }
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
   }
   //for(int i=0;i<=n+1;i++){for(int j=0;j<=m+1;j++){cout<<a[i][j];}cout<<"\n";}
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='W' && !vis[i][j])
            {   
                vis[i][j] = true;
                dfs(i,j);
                pond ++;
            }
        }
    }
   cout<<pond;
   return 0;
}