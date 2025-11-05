#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long a=0,b=0,c=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) a = i;
    }
     
    
    cout<<a*b*c;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}