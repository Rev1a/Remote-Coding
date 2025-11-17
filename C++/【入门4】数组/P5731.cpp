#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x=1,y=0;
    int a[15][15]={0};
    int s = 1;
    while(s<=n*n)
    {
        while(a[x][y+1]==0 && y+1<=n)
        {   
            y++;
            a[x][y] = s;
            s++;
        }
        while(a[x+1][y]==0 && x+1<=n)
        {
            x++;
            a[x][y] = s;
            s++;
        }
        while(a[x][y-1]==0 && y-1>=1)
        {
            y--;
            a[x][y] = s;
            s++;
        }
        while(a[x-1][y]==0 && x-1>=1)
        {
            x--;
            a[x][y] = s;
            s++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<setw(3)<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}