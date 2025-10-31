#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[n+2][m+2]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int dx[8]={-1,0,1,1,1,0,-1,-1};
    int dy[8]={1,1,1,0,-1,-1,-1,0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {   
            if(a[i][j]=='*'){continue;}
            int temp=0;
            for(int k=0;k<8;k++)
            {
                    if(a[i+dx[k]][j+dy[k]]=='*')
                    {
                        temp++;
                    }
            }
            a[i][j]=temp+'0';
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}