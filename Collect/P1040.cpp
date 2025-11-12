// 绿题 不可战胜的
#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int n,a[40];
ll dp[40][40];
int root[40][40];
ll dfs(int L,int R)
{   
    if(L > R)
    {
        return 1;
    }
    if(dp[L][R])
    {
        return dp[L][R];
    }
    ll maxs = 0;
    for(int i=L;i<=R;i++)
    {
        ll t = dfs(L,i-1) * dfs(i+1,R) + a[i];
        if( t > maxs)
        {
            maxs  = t;
            root[L][R] = i;
        }
    }
    return dp[L][R] = maxs;
}
void dg(int L,int R)
{   
    if(L > R) return;
    cout<<root[L][R]<<" ";
    dg(L,root[L][R]-1);
    dg(root[L][R]+1,R);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i][i] = a[i];
        root[i][i] = i;  
    }

    cout<<dfs(1,n)<<"\n";
    dg(1,n);
    return 0;
}