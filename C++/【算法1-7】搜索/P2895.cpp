#include<bits/stdc++.h>
using namespace std;
int danger[305][305]={0};
int M;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
queue<tuple<int,int,int>> q;
bool vis[305][305][1005];
int t = 0;
void bfs(int x,int y)
{   

    while(!q.empty())
    {   
        auto [x, y, t] = q.front(); q.pop();
        if(danger[x][y] == INT_MAX)
        {
            cout<<t<<"\n";
            return ;
        }
        for(int j=0;j<4;j++)
        {
            int nx = x + dx[j];
            int ny = y + dy[j];
            int nt = t+1;
            if(nx <0 || ny<0)continue;
            if(nx>300 || ny>300)
            {
                cout<<nt<<"\n";
                return;
            }
            if(!vis[nx][ny][nt] && nt<=1004 && nt < danger[nx][ny] )
            {   
                vis[nx][ny][nt] = true;
                q.push({nx,ny,nt});
            }
            
        }
    }
    cout<<"-1\n";
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=0;i<=300;i++)for(int j=0;j<=300;j++)danger[i][j] = INT_MAX;
    cin>>M;

    int b,c,d;

    for(int i=0;i<M;i++)
    {
        cin>>b>>c>>d;
        for(int j=0;j<4;j++)
        {
            int nx = b + dx[j];
            int ny = c + dy[j];
            if(nx<0 || ny<0 || nx>300 || ny>300) continue;
            danger[nx][ny] = min(d,danger[nx][ny]);
            
        }
        danger[b][c] = min(d,danger[b][c]);
    }
    if(danger[0][0] == 0)
    { 
    cout << -1 << "\n";
    return 0;
    }
    vis[0][0][0] = true;
    q.push({0,0,0});
    

    bfs(0,0);


    return 0;
}