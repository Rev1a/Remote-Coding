#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"-1\n";
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<n-i+1<<" ";
        }
        else 
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}