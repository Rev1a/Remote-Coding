#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,arr[3000]={0},len=1,a,cns=0;
    cin>>n>>a;
    arr[1]=1;
    for(int i = 1;i <= n; i++)
    {   
        int push = 0;
        for(int j = 1; j <= len; j++)
        {
            int s = arr[j] * i + push;
            arr[j] = s % 10;
            push = s / 10;
        }
        while(push)
        {
            arr[++len] = push % 10;
            push /= 10;
        }
    }
    for(int i=1;i<=len;i++)
    {
        if(arr[i]==a)
        {
            cns ++;
        }
    }
    cout<<cns<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}