#include <bits/stdc++.h>
using namespace std;
double a, b, c, d;
auto fx(double x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> c >> d;
    vector<double> ans;
    double eps = 1e-6;
    for (int i = -100; i <= 100; i++)
    {
        if (abs(fx(i)) < eps)
        {
            ans.push_back(i);
        }
    }
    for (int i = -100; i <= 99; i++)
    {
        double f1 = fx(i);
        double f2 = fx(i + 1);
        if (f1 * f2 > -eps)
        {
            continue;
        }
        else
        {
            double l = i, r = i + 1;
            while (r - l > eps)
            {
                double mid = (l + r) / 2;
                if (fx(mid) * f1 > 0)
                {
                    l = mid;
                }
                else
                {
                    r = mid;
                }
            }
            ans.push_back(l);
        }
    }
    sort(ans.begin(), ans.end());
    cout << fixed << setprecision(2);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}