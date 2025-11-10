#include<bits/stdc++.h>
using namespace std;  //BFS Parctice
int a[402][402];
bool vis[402][402];
int n,m,x,y;
int cx;
int cy;
int dx[8]={-2,-2,-1,1,2,2,1,-1};
int dy[8]={1,-1,-2,-2,-1,1,2,2};
queue<int> pos_x;
queue<int> pos_y;
void bfs(int x,int y)
{   
    pos_x.push(x);
    pos_y.push(y);
    while(!pos_x.empty())
    {   
        int cx = pos_x.front();
        int cy = pos_y.front();
        pos_x.pop();
        pos_y.pop();
        for(int j=0;j<8;j++)
        {   
            int nx = dx[j] + cx;
            int ny = dy[j] + cy;
            if( nx >=1 && nx <=n && ny >=1 && ny<=m && !vis[nx][ny] )
            {   
                a[nx][ny] = a[cx][cy] + 1;
                vis[nx][ny]=true;
                pos_x.push(nx);
                pos_y.push(ny);
                
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m>>x>>y;
    memset(a, -1, sizeof(a)); 
    a[x][y] = 0;
    vis[x][y]=true;
    bfs(x,y);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}