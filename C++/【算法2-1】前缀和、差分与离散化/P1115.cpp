#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(n + 5,0);
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            dp[i] = a[i];
        else
            dp[i] = max(a[i], dp[i - 1] + a[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
    return 0;
}