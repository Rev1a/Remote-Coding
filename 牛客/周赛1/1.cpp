#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    char a[52][52];
    const int de=1000000007;
    long long b[52][52]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    b[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {   
            
            if(a[i][j]=='R' && j<m)
            {
                b[i][j+1] = (b[i][j+1] + b[i][j]) % de;
            }
            if(a[i][j]=='D' && i<n)
            {
                b[i+1][j]=(b[i+1][j]+b[i][j])%de;
            }
            if(a[i][j]=='B')
            {   
                if(i<n){b[i+1][j]=(b[i+1][j]+b[i][j])%de;}
                if(j<m){b[i][j+1] = (b[i][j+1] + b[i][j]) % de;}
            }
        }
    }
    cout<<b[n][m]%de;
    return 0;
}
