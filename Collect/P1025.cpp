#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[205][205]={0};
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i)a[i][j]=1;
            if(j>i)
            {
            a[i][j] = a[i-1][j-1] + a[i][j-i];
            }
        }
    }
    cout<<a[k][n];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}