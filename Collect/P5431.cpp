#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
ll qpow(ll a,ll b,ll p)
{
    ll res =1 % p;
    while(b > 0)
    {
        if(b&1)
        {
            res = res * a % p;
        }
        a = a * a % p;
        b >>= 1; 
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p,k;
    cin>>n>>p>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<ans<<"\n";
    return 0;
}