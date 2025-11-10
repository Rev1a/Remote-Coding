#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
struct mission
{
    ll a,h,v;
};

bool tmp(mission o,mission p)
{
    return abs(o.a) < abs(p.a);
}
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<mission> left,right;
    for(int i = 0; i < n; i++) 
    {
        ll a, h, v;
        cin >> a >> h >> v;
        if(a < 0) {
            left.push_back({a, h, v});
        } else {
            right.push_back({a, h, v});
        }
    }
    sort(left.begin(), left.end(), [](mission &a, mission &b) {
        return a.a > b.a;  
    });
    sort(right.begin(), right.end(), [](mission &a, mission &b) {
        return a.a < b.a;  
    });
    
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}