#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (y == 3 || x == 1 && y == 0 || x == 0 && y == 1)
    {
        cout << "Alice" << '\n';
    }
    else
    {
        cout << "Bob" << '\n';
    }
    return 0;
}