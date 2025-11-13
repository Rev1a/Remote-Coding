#include<bits/stdc++.h>
using namespace std;
const int dep = 305;
char a [dep][dep];
int dis[dep][dep];
bool vis[dep][dep];
int n,m,ex,ey,bx,by;
queue<pair<int,int>> q;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
pair<int,int> portal[26][2];  
int portal_count[26] = {0};    
void bfs()
{   
    dis[bx][by] = 0;
    while(!q.empty()) 
    {   
        auto [x,y] = q.front(); q.pop();
        if(a[x][y]=='=')
            {
                cout << dis[x][y] << "\n";
                return;
            }
        if(a[x][y]>='A' && a[x][y]<='Z')
        {
            int id = a[x][y]-'A';
            for (auto &p : portal[id])
            {
                int nx = p.first, ny = p.second;
                if(nx==x && ny==y) continue;
                if(dis[nx][ny] > dis[x][y])
                {
                    dis[nx][ny] = dis[x][y];   // 0 代价
                    dq.push_front({nx,ny});
                }
            }
        }


        for(int i=0;i<4;i++)
        {
            int nx = x+dx[i], ny = y+dy[i];
            if(nx>=1 && nx<=n && ny>=1 && ny<=m && a[nx][ny]!='#' && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                dis[nx][ny] = dis[x][y]+1;
                q.push({nx, ny});
            }
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin >> s;
        for(int j=1;j<=m;j++)
        {
            a[i][j] = s[j-1];
            if(a[i][j]=='@')
                {
                    bx = i;
                    by = j;
                }
            else if(a[i][j]=='=')
                {
                    ex = i;
                    ey = j;
                }
            else if(a[i][j]>='A' && a[i][j]<='Z')
                {
                    int id = a[i][j]-'A';
                    portal[id][portal_count[id]++] = {i,j};
                }
        }
    }

    vis[bx][by]=true;
    q.push({bx,by});
    bfs();
    return 0;
}