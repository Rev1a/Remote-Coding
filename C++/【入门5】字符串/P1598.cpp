#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt[26] = {0};
    for (int i = 0; i < 4; i++)
    {
        string b;
        getline(cin, b);
        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] <= 'Z' && b[j] >= 'A')
            {
                cnt[b[j] - 'A']++;
            }
        }
    }
    int mx = *max_element(cnt, cnt + 26);
    vector<vector<char>> mp(mx, vector<char>(26, ' '));

    for (int col = 0; col < 26; col++)
    {
        int h = cnt[col];
        for (int row = mx - 1; row >= mx - h; row--)
        {
            mp[row][col] = '*';
        }
    }
    for (int row = 0; row < mx; row++)
    {
        int last = 25;
        while (last >= 0 && mp[row][last] == ' ')
            last--;

        for (int col = 0; col <= last; col++)
        {
            cout << mp[row][col];
            //if (col != last)
                cout << ' ';
        }
        cout << "\n";
    }
    for (int i = 0; i < 26; i++)
    {
        cout << char('A' + i);
        //if (i != 25)
            cout << ' ';
    }
    cout << "\n";

    return 0;
}