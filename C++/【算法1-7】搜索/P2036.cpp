#include<bits/stdc++.h>
using namespace std;
const int M = 15;
int a[M],b[M],ans=INT_MAX;int n;
void dfs(int i,int x,int y)
{
    if(i>n)
    {
        if(x==1 && y==0)return ;
        ans = min(abs(x-y),ans);
        return;
    }
    dfs(i+1,x*a[i],y+b[i]);
    dfs(i+1,x,y);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    dfs(1,1,0);
    cout<<ans;
    return 0;
}