#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
    int vs[5][5] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
    int as[a]={0};
    int bs[b]={0};
    int ans_a=0,ans_b=0;
    for(int i=0;i<a;i++)
    {
        cin>>as[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>bs[i];
    }
    for(int i=0;i<n;i++)
    {
        ans_a +=vs[as[i%a]][bs[i%b]];
        ans_b +=vs[bs[i%b]][as[i%a]];
    }
    cout<<ans_a<<" "<<ans_b;
    return 0;
}