#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll> pos(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>pos[i];
    }
    vector<pair<ll,ll>> parameter;
    for(int i=1;i<=n;i++)
    {
        ll left = pos[i] - k;
        ll right = pos[i] + k;
        parameter.push_back({left,1});
        parameter.push_back({right+1,-1});
    }
    sort(parameter.begin(), parameter.end(), [](const pair<long long, int>& a, const pair<long long, int>& b) 
    {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second; 
    });
    ll maxs = 0;
    ll cur = 0;
    for(const auto& p : parameter)
    {
        cur +=p.second;
        maxs = max(maxs,cur);
    }
    cout<<maxs<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}