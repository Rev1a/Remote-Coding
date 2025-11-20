#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
void solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    vector<ll> row(n + 1, 0), col(m + 1, 0);
    ll sums = 0;

    while (h--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        row[x] += z;
        col[y] += z;
        sums = (sums + 1LL * z * (x + y)) % MOD;
    }
    ll sum_j = (1LL * m * (m + 1) / 2) % MOD;
    ll sum_i = (1LL * n * (n + 1) / 2) % MOD;
    ll ans=0;
    for (int i = 1; i <= n; i++)
    {
        if (row[i] == 0){continue;}
        ll s = ((1LL * m * i % MOD) + sum_j) % MOD;
        ans = (ans + row[i] % MOD * s) % MOD;
    }
    for (int j = 1; j <= m; j++)
    {
        if (col[j] == 0){continue;}
        ll s = ((sum_i + 1LL * n * j % MOD)) % MOD;
        ans = (ans + col[j] % MOD * s) % MOD;
    }
    ans = (ans - sums) % MOD;
    if(ans < 0) ans += MOD;
    cout<<ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}