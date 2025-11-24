#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    ll s1 = (n * (n + 1) / 2) * (m * (m + 1) / 2);
    ll a = min(n,m);
    ll b = max(n,m);
    ll s2 = (b - a) * (a * (a + 1) / 2) + (a * (a + 1) * (2 * a + 1) / 6);
    cout<<s2<<" "<<s1-s2<<"\n";
    return 0;
}