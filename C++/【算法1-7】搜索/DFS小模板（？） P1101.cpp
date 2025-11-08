#include<bits/stdc++.h>
using namespace std;
string yz = "yizhong";
int n;
char a[105][105];
bool vis[105][105];
int dx[8]={1,1,1,0,0,-1,-1,-1};
int dy[8]={1,0,-1,1,-1,1,0,0};

void dfs(int x,int y)
{
    for(int i=0;i<8;i++)
    {   
        int flag = 1;
        for(int j=0;j<7;j++)
        {
           
            int nx = x + j*dx[i];
            int ny = y + j*dy[i];
            if( nx<1 || nx>n || ny<1 || ny>n || yz[j] !=a[nx][ny])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            for(int j=0;j<7;j++)
            {
                int nx = x + j*dx[i];
                int ny = y + j*dy[i];
                vis[nx][ny] = 1;
            }
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
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {

        if(a[i][j] == 'y')dfs(i, j);

        }
    }   

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {

            if(!vis[i][j]) cout<<"*";
            else           cout<< a[i][j];
        }
        cout<<'\n';
    }
    return 0;
}