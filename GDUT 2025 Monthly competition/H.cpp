#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    long long a[n+5][n+5]={0};
    long long ans = 0;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    if(a[1][1]==1)
    {
        cout<<0;
        return 0;
    }
    long long mw=n;
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]==1)break;
        long long w = 0;
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1)break;
            w++;
        }
        mw = min (w,mw);
        long long s = 1LL * mw * i;
        ans = max(s,ans);
    }
    cout<<ans;
}