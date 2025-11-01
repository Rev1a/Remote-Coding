#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n>>m>>c;
    auto sum = vector(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>sum[i][j];
            sum[i][j] =  sum[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        }
    }
    int x=1,y=1,maxv=INT_MIN;
    for(int i=0;i<=n-c;i++)
    {
        for(int j=0;j<=m-c;j++)
        {
            int v = sum[i+c][j+c] - sum[i+c][j] - sum[i][j+c] + sum[i][j];
            if(v>maxv)
            {
                maxv= v;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}