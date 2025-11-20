#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[25][25] = {0};
bool danger[25][25] = {0};
int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

/*
int dx[8]={-1,1,2,2,1,-1,-2,-2};
int dy[8]={2,2,1,-1,-2,-2,-1,1};
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, hx, hy;
    cin >> x >> y >> hx >> hy;

    memset(danger, false, sizeof(danger));
    danger[hx][hy] = true;

    for (int i = 0; i < 8; i++)
    {
        int tx = hx + dx[i];
        int ty = hy + dy[i];
        if (tx >= 0 && tx <= x && ty >= 0 && ty <= y)
        {
            danger[tx][ty] = true;
        }
    }

    if(danger[0][0]){cout<<0;return 0;}
    dp[0][0] = 1;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            if (i == 0 && j == 0)
                continue;

            if (danger[i][j])
            {
                dp[i][j] = 0;
                continue;
            }
            ll t1 = (i > 0) ? dp[i - 1][j] : 0;
            ll t2 = (j > 0) ? dp[i][j - 1] : 0;
            dp[i][j] = t1 + t2;
        }
    }
    cout << dp[x][y];
    return 0;
}