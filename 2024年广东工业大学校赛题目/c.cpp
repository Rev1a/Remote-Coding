#include<bits/stdc++.h>
using namespace std;
using ll =long long;
struct blank
{
    ll l,r;
}
a[100005];
void end()
{
    cout<<"-1";
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ll pos=0;
    a[0].l = -LLONG_MAX / 2;
    a[0].r = LLONG_MAX / 2;
    ll times=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
        a[i].l-=i;
        a[i].r-=i;
    }
    while(pos<n)
    {    times++;  
        if (times < a[pos+1].l)
        {
            times = a[pos+1].l;
        }
        if (times > a[pos+1].r) {
            cout << -1;
            return 0;
        }
        pos++;

    }
    cout<<times+n+1;
    return 0;
}