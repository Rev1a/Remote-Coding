#include <bits/stdc++.h>
using namespace std;
int a[100005];
void quick_sort(int L, int R)
{
    int x = L, y = R, mid = a[(x + y) / 2];
    while (x <= y)
    {
        while (a[x] < mid)
            x++;
        while (a[y] > mid)
            y--;
        if (x <= y)
        {
            swap(a[x], a[y]);
            x++;
            y--;
        }
    }
    if (y > L)
        quick_sort(L, y);
    if (x < R)
        quick_sort(x, R);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    quick_sort(1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}