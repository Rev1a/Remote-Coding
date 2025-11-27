#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    while (!t.empty())
    {
        bool matched = false;
        for (int i = 0; i + t.size() <= s.size(); i++)
        {
            if (s.substr(i, t.size()) == t)
            {
                s.erase(0, i + t.size());
                t.erase(0, 1);
                cnt++;
                matched = true;
                break;
            }
        }
        if (!matched)
        {
            t.erase(0, 1);
        }
    }
    cout << cnt;
}