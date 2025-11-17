#include <bits/stdc++.h>
using namespace std;
int c[30], v[30], dp[30005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >>  n >>m;
    for (int i = 1; i <= m; i++)
    {
        cin >> c[i] >> v[i];
        v[i] = c[i] * v[i];
    }
    for (int i = 1; i <=m; i++)
    {
        for (int j = n; j >= c[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - c[i]] + v[i]);
        }
    }
    cout << dp[n];
    return 0;
}