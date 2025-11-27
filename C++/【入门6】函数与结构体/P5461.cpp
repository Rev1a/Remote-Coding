#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll t = 1 << n;
    vector<vector<int>> a(t, vector<int>(t, 1));
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            for (ll k = t >> 1; k > 0; k >>= 1)
            {
                if ((i & k) == 0 && (j & k) == 0)
                {
                    a[i][j] = 0;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}