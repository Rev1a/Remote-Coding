#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct k
{
    ll l, r;
};
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<k> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].l >> a[i].r;
        a[i].l-=i;
        a[i].r-=i;
    }
    ll pos = 0;
    ll t = 0;
    ll limit = LLONG_MAX;
    if(a[0].r==0)
    {
        cout<<"-1\n";
        return 0;
    }
    for(int i=0;i<n;i++)
    {   
        if(pos > a[i].r || a[i].l > limit)
        {
            cout<<"-1\n";
            return 0;
        }
        if(pos < a[i].l)
        {
            t+=a[i].l - pos;
            pos = a[i].l;
        }
        limit = a[i].r;
    }
    cout<<t+n;
    return 0;
}