#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, p;
    cin >> n >> p;
    vector<ll> inv(n + 1);
    inv[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        inv[i] = (p - (p / i) * inv[p % i] % p) % p;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << inv[i] << "\n";
    }
}