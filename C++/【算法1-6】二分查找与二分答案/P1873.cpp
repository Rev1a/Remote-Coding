#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll res = 0;
vector<ll> a;
bool check(ll x)
{
    ll sum = 0;
    for (ll h : a)
    {
        if (h > x)
        {
            sum += (h - x);
        }
        if (sum >= m)
        {
            return true;
        }
    }
    return sum >= m;
}
void solve()
{

    cin >> n >> m;
    a.resize(n);
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll l = 1, r = mx;
    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        if (check(mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--)
    {
        solve();
    }
    cout << res << "\n";
    return 0;
}