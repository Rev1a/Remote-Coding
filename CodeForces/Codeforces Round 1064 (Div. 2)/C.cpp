#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll maxs = 0;
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxs)maxs=a[i];
        sum+=a[i];
    }
    
    sum -= maxs;
    cout<<sum<<"\n";
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