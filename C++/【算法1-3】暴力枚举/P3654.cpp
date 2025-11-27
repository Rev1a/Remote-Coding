#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,c,k;
    cin>>r>>c>>k;
    vector<vector<char>> a(r,vector<char>(c,0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    
}