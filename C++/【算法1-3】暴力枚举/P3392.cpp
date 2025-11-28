#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n + 5, vector<ll>(4, 0));
    a[0][1] = 0;
    a[0][2] = 0;
    a[0][3] = 0;
    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == 'W')
                a[i][1]++;
            if (str[j] == 'B')
                a[i][2]++;
            if (str[j] == 'R')
                a[i][3]++;
        }
        a[i][1] += a[i - 1][1];
        a[i][2] += a[i - 1][2];
        a[i][3] += a[i - 1][3];
    }
    ll sum = LLONG_MAX;
    for (int w = 1; w <= n - 2; w++)
    {
        for (int b = w + 1; b <= n - 1; b++)
        {
            ll white_cost = (w * m) - a[w][1];
            ll blue_cost = (b - w) * m - (a[b][2] - a[w][2]);
            ll red_cost = (n - b) * m - (a[n][3] - a[b][3]);
            sum = min(sum, red_cost + white_cost + blue_cost);
        }
    }
    cout << sum << "\n";
    return 0;
}