#include<bits/stdc++.h>
using namespace std;
const int width = 305; 
bool vis[width][width];
int a[width][width];
int n,m;
int bx,by;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
struct point{
    int x;
    int y;
    int t;
};
queue<point> que;


void goto_another(int &nx,int &ny,int k)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==a[nx][ny]&&(i!=nx||j!=ny))
            {
                nx=i;
                ny=j;
                return ;
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
        cin>>s;
        for(int j=1;j<=m;j++)
        {
            a[i][j] = s[j-1];
            if(a[i][j]=='@')
            {
                bx = i;
                by = j;
            }
        }
    }
    que.push((point){bx,by,0});
    while(!que.empty())
    {
        point f=que.front();
        que.pop();
        if(a[f.x][f.y]=='=')
        {
            cout<<f.t;
            return 0;
        }
        if(a[f.x][f.y]>='A'&&a[f.x][f.y]<='Z')
        {
            goto_another(f.x,f.y,f.t);
        }
        for(int i=0;i<4;i++)
        {
            int nx=f.x+dx[i];
            int ny=f.y+dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]!='#'&&!vis[nx][ny])
            {
                vis[nx][ny]=true;
                que.push((point){nx,ny,f.t+1});
            }
        }
    }
    return 0;
}