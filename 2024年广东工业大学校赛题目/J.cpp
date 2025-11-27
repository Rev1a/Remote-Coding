#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
long long modpow(long long a, long long b, long long mod)
{
    long long r = 1;
    while (b)
    {
        if (b & 1)
            r = r * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}

long long modinv(long long a, long long mod)
{
    return modpow(a, mod - 2, mod);
}

void solve()
{
    ll n, p, q;
    cin >> n >> p >> q;
    ll fm = q - p;
    ll fz = q;
    ll ans = 0;
    for(int i=1;i<=n;i++)
    {
        ans = fm * modinv(fz, MOD) % MOD;
    }
    
    cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}