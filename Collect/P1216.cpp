#include <bits/stdc++.h>
using namespace std;
int a[1005][1005] = {0};
int r;
void dp()
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a[i][j] += max(a[i - 1][j - 1], a[i - 1][j]);
        }
    }
}
int main()
{
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    dp();
    int ans = *max_element(a[r] + 1, a[r] + r + 1);
    cout << ans;
    return 0;
}