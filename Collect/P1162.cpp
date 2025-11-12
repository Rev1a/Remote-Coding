#include<bits/stdc++.h>
using namespace std;
int xx[4]={1,-1,0,0};
int yy[4]={0,0,};
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[35][35];
    bool vis[35][35];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n+2;i++)
    {
        a[0][i]=0;
        a[n+1][i]=0;
        a[i][0]=0;
        a[i][n+1]=0;
    }
    queue<int> x;
    queue<int> y;
    x.push(0);
    y.push(0);
    vis[0][0]=1;
    while(!x.empty())
    {
        for(int i=0;i<4;i++)
        {
            int dx = x.front() + xx[i];
            int dy = y.front() + yy[i];
            if(dx >=0 && dx <= n+1 && dy>=0 && dy <=n+1 && a[dx][dy]==0 && !vis[dx][dy])
            {
                x.push(dx);
                y.push(dy);
                vis[dx][dy] = 1;
            }
        }
        x.pop();
        y.pop();
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j] == 0 && vis[i][j] == 0)
            {
                cout<<"2";
            }
            else
            {
                cout<<a[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
}