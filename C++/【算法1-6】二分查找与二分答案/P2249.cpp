#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (m--)
    {
        int q;
        cin >> q;
        int l = 1, r = n;
        int ans = -1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (a[mid] >= q)
            {
                ans = mid;   // mid 可能是第一次出现的位置
                r = mid - 1; // 继续往左找
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ans != -1 && a[ans] == q)
            cout << ans;
        else
            cout << -1;
        if (m)
            cout << " ";
    }
    return 0;
}