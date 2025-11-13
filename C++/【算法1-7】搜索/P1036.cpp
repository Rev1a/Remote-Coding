#include<bits/stdc++.h>
using namespace std;
const int M = 22;
int a[22],ans,n,k;
bool isPrime(int s)
{
    if(s<2)return false;
    if(s==2)return true;
    else
    {
        for(int i=2;i*i<=s;i++)
        {
            if(s%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
void dfs(int i,int cnt,int x)
{
    if(cnt == k)
    {
        if(isPrime(x))ans++;
        return;
    }
    if(i > n)return;
    dfs(i+1,cnt+1,x+a[i]);
    dfs(i+1,cnt,x);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>k;

    for(int i=1;i<=n;i++){cin>>a[i];}

    dfs(1,0,0);
    cout<<ans;
    return 0;
}