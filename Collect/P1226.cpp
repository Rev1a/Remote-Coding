#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll qpow(ll a, ll b, ll p)
{
    ll res = 1 % p;
    while (b > 0)
    {
        if (b & 1)
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
    ll a, b, p;
    cin >> a >> b >> p;
    ll res = qpow(a, b, p);
    cout << a << "^" << b << " mod " << p << "=" << res;
}