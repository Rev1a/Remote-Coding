#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int map[n+2][m+1]={0};
    for(int i=0;i<n;i++)
    {
        int a;
        char b;
        cin>>a>>b;
        if(b=='R')
        {
            for(int j=a;j<=m;j++)
            {
                map[i+1][j] = 1; 
            }
        }
        if(b=='L')
        {
            for(int j=0;j<=a;j++)
            {
                map[i+1][j] = 1; 
            }
        }
    }
    for(int i=1;i<=n+1;i++)
    {   
        int cnt  = 0;
        for(int j=1;j<=m;j++)
        {
            if( map[i][j]==0 && map[i-1][j]==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}