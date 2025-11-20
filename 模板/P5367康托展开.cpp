
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;
struct BIT {
    int n;
    vector<int> t;
    BIT(int n) : n(n), t(n+1, 0) {}
    void add(int x, int v) {
        for (; x <= n; x += x & -x) t[x] += v;
    }
    int sum(int x) {
        int s = 0;
        for (; x > 0; x -= x & -x) s += t[x];
        return s;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++){cin >> a[i];}

    vector<ll> fact(n);
    fact[0] = 1;
    for (int i = 1; i < n; i++){fact[i] = fact[i - 1] * i % MOD;}
    ll sum = 0;
    BIT bit(n);
    for(int i=1;i<=n;i++) bit.add(i,1);
    for(int i=0;i<n;i++){
        ll x = a[i];
        ll cnt = bit.sum(x-1);  
        sum = (sum + cnt * fact[n-1-i]%MOD) % MOD;
        bit.add(x,-1);        
    }
    sum = (sum + 1) % MOD;
    cout << sum;
}