#include <bits/stdc++.h>
using namespace std;
#define ll long long
int dx[5] = {0, 1, -1, 0, 0};
int dy[5] = {0, 0, 0, 1, -1};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int t = 2 * (m - 1);
    vector mp(n, vector(m, vector<char>(t)));
    for (int i = 0; i < n; i++)
    {
        int c;
        char d;
        cin >> c >> d;
        c--;
        for (int j = 0; j < t; j++)
        {
            mp[i][c][j] = true;
            if (d == 'R')
            {
                if (c == m - 1)
                {
                    d = 'L';
                    c = m - 2;
                }
                else
                {
                    c++;
                }
            }
            else
            {
                if (c == 0)
                {
                    d = 'R';
                    c = 1;
                }
                else
                {
                    c--;
                }
            }
        }
    }
    vector vis(n, vector(m, vector<char>(t, 0)));
    queue<tuple<int, int, int>> q;
    q.emplace(0, m - 1, 0);
    vis[0][m - 1][0] = 1;
    while (!q.empty())
    {
        auto [x, y, ct] = q.front();
        q.pop();
        for (int i = 0; i < 5; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nt = (ct + 1) % t;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny][nt] && !mp[nx][ny][ct] && !mp[nx][ny][nt])
            {
                vis[nx][ny][nt] = true;
                q.emplace(nx, ny, nt);
            }
        }
    }
    for (int i=0; i < t; i++)
    {
        if (vis[n - 1][0][i])
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
