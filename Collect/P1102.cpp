#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int i = 0, j = 0;
    long long cnt = 0;
    sort(arr.begin(), arr.end());
    while (j < n)
    {
        if (i == j)
        {
            j++;
            continue;
        }
        int diff = arr[j] - arr[i];
        if (diff < c)
            j++;
        else if (diff > c)
            i++;
        else
        {
            int vi = arr[i], vj = arr[j];
            long long ci = 0, cj = 0;
            while (i < n && arr[i] == vi)
                ci++, i++;
            while (j < n && arr[j] == vj)
                cj++, j++;
            cnt += ci * cj;
        }
    }
    cout << cnt;
    return 0;
}