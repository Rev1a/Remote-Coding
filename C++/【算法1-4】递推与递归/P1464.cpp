#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll wdp[22][22][22];
long long w(long long a, long long b, long long c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return wdp[20][20][20];
    return wdp[a][b][c];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 20; b++)
        {
            for (int c = 0; c <= 20; c++)
            {
                if (a == 0 || b == 0 || c == 0)
                {
                    wdp[a][b][c] = 1;
                }
                else if (a < b && b < c)
                {
                    wdp[a][b][c] = wdp[a][b][c - 1] + wdp[a][b - 1][c - 1] - wdp[a][b - 1][c];
                }
                else
                {
                    wdp[a][b][c] = wdp[a - 1][b][c] + wdp[a - 1][b - 1][c] + wdp[a - 1][b][c - 1] - wdp[a - 1][b - 1][c - 1];
                }
            }
        }
    }
    ll a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        int res = w(a, b, c);
        cout << "w(" << a << ", " << b << ", " << c << ") = " << res << "\n";
    }
    return 0;
}