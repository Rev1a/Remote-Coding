#include <bits/stdc++.h>
using namespace std;
int len = 1, f[2][6000] = {0};
void hp(int k)
{
    int cur = k % 2;
    int be1 = (k - 1) % 2;
    int be2 = (k - 2) % 2;
    for (int i = 1; i <= len; i++)
    {
        f[cur][i] = f[be1][i] + f[be2][i];
    }
    for (int i = 1; i <= len; i++)
    {
        if (f[cur][i] >= 10)
        {
            f[cur][i + 1] += f[cur][i] / 10;
            f[cur][i] %= 10;
        }
    }
    while (f[cur][len + 1] > 0)
        len++;
}
int main()
{
    f[1][1] = 1;
    f[0][1] = 2;
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++)
        hp(i);
    for (int i = len; i >= 1; i--)
    {
        cout << f[n % 2][i];
    }
    return 0;
}