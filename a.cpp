#include<bits/stdc++.h>
using namespace std;
using ll =long long;
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    ll array_sum=0;
    ll output_sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        array_sum+=a[i];
    }
    sort(a.begin(),a.end());
    ll rnd=array_sum/x;
    for(int i=0;i<rnd;i++)
    {
        output_sum+=a[n-1-i];
    }
    cout<<output_sum<<"\n";
    ll cur=0;
    ll l=0,r=n;
    while(l<r) 
    {
        if((cur + a[r-1]) / x > cur / x)
        {
            cur+=a[r-1];
            cout<<a[r-1]<<" ";
            r--;
        }
        else
        {
            cout<<a[l]<<" ";
            cur+=a[l];
            l++;

        }
        if(l==r)cout<<"\n";
    }
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