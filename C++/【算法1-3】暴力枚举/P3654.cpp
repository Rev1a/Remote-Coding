#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,c,k;
    cin>>r>>c>>k;
    vector<vector<char>> a(r+1,vector<char>(c+1,0));
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    int cnt = 0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(a[i][j]=='.')
            {   
                int ls=0,rs=0;
                for(int s=0;s<k;s++)
                {
                    if(i+s>rs)break;
                    if(a[i+s][j]=='#')break;
                    ls++;
                }
                for(int s=0;s<k;s++)
                {
                    if(j+s>c)break;
                    if(a[i][j+s]=='#')break;
                    rs++;
                }
                if(ls==k)cnt++;
                if(rs==k)cnt++;
            }
        }
    }
    cout<<cnt;
}
/*

    . # # # .
    # # . # .
    . . # . .
    # . . # .
    # . # # # 

*/