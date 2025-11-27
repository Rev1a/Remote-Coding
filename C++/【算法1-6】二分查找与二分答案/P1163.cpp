#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double w0, w, m;
    cin >> w0 >> w >> m;
    double l = 0, r = 500, eps = 1e-4;
    while (r - l > eps)
    {
        double tmp = w0;
        double mid = (l + r) / 2;
        for (int i = 0; i < m; i++)
        {
            tmp = tmp * (1 + mid / 100.0) - w; 
        }
        if (tmp > 1e-4)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << fixed << setprecision(1) << l ;
    return 0;
}