#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, w;

    cin >> n >> w;

    vector<ll> a(n + 1);
    vector<ll> dp(w + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i <= w; i++) dp[i] = INT_MAX;


    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    dp[0] = 0;

    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= a[j])
            {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }

    cout << dp[w] << "\n";

    return 0;
}