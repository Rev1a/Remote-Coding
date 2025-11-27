#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if (x <= 1)
        return false;
    if (x == 2)
        return true;
    for (int i = 2; i * i <=x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    for (int i = 1; i <= 10000; i++)
    {
        if (isPrime(i))
        {
            a.push_back(i);
        }
    }

    int n;
    cin >> n;

    for (int i = 4; i <= n; i += 2)
    {
        for (int j = 0; j < a.size(); j++)
        {
            int temp = i - a[j];
            if (isPrime(temp))
            {
                cout << i << "=" << a[j] << "+" << temp << "\n";
                break;
            }
        }
    }
    return 0;
}