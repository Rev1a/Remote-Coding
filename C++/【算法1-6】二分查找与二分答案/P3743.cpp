#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
struct device
{
    int a,b;
};
int n,p;
vector<device> d;
bool check(ld x)
{
    ld cnt = 0;
    for(int i=1;i<=n;i++)
    {
        ld q = d[i].a*x - d[i].b;
        if(q > 0)
        {
            cnt += q;
        }
    }
    return cnt <= x * p;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>p;
    d.resize(n+1);
    ll sum_usage = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>d[i].a>>d[i].b;
        sum_usage += d[i].a;
    }
    if(sum_usage <= p)
    {
        cout<<"-1";
        return 0;
    }
    ld l=0,r=1e10,mid;
    ld eps = 1e-6;
    while(r-l>eps)
    {
        mid = (r+l)/2;
        //cout<<mid<<endl;
        if(check(mid))
        {
            l =mid;
        }
        else
        {
            r = mid;
        }
    }
    if(r >=1e10)
    {
        cout<<"-1\n";
        return 0;
    }
    else
    {
        cout<<fixed<<setprecision(10)<<r;
        return 0;
    }
}