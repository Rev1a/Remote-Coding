#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<ll>> a(n + 1, vector<ll>(n + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    ll res = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        vector<ll> colsum(n + 1, 0);
        for (int j = i; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                colsum[k] += a[j][k];
            }
            ll cur = 0;
            ll bes = LLONG_MIN;
            for (int k = 1; k <= n; k++)
            {
                cur = max(colsum[k], cur + colsum[k]);
                bes = max(bes, cur);
            }
            res = max(res, bes);
        }
        
    }
    cout << res << "\n";
    return 0;
}