#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    vector<int> a(m + 1);
    vector<int> b(n + 1);
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(a.begin() + 1, a.end());
    sort(b.begin() + 1, b.end());
    int cnt = b.size();
    int i = 1;
    long long sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        int x = b[i];
        int l = 1, r = m;

        while (l < r) 
        {
            int mid = (l + r) >> 1;
            if (a[mid] >= x)
                r = mid;
            else
                l = mid + 1;
        }

        long long best = 1e18;

        if (l <= m) best = min(best, 1LL * abs(a[l] - x));
        if (l - 1 >= 1) best = min(best, 1LL * abs(a[l - 1] - x));

        sum += best;
    }
    cout<<sum<<"\n";
    return 0;
}