#include <bits/stdc++.h>
using namespace std;

int n, r;
int a[25];

void dfs(int x, int dep)
{
    if (dep > r)
    {
        for (int i = 1; i <= r; i++)
        {
            cout << setw(3) << a[i];
        }
        cout << "\n";
        return;
    }
    for (int i = x; i <= n; i++)
    {
        a[dep] = i;
        dfs(i + 1, dep + 1);
    }
}
int main()
{
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n >> r; dfs(1, 1); return 0;
}