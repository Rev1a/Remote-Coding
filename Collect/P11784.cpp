#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a;
    cin>>a;
    if('0' <= a[0] && a[0] <= '9' )
    {
        cout<<"https://www.luogu.com.cn/problem/P"<<a<<"\n";
    }
    else
    {
        cout<<"https://www.luogu.com.cn/problem/"<<a<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}