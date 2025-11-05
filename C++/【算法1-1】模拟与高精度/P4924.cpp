#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n+2][n+2];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j] = (i-1)*n + j;
        }
    }
    while(m--)
    {
        int x,y,r,z;
        cin>>x>>y>>r>>z;
        int size = 2 * r + 1;
        int temp[505][505];
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                temp[i][j] = a[x-r+i][y-r+j];
            }
        }
        if (z == 0) 
        {
            for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
            a[x - r + i][y - r + j] = temp[size - j - 1][i];
        }
        else 
        {
            for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
            a[x - r + i][y - r + j] = temp[j][size - i - 1];
        }
    }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}