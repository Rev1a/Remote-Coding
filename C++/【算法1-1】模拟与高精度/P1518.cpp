#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char maps[12][12];
bool vis[10][10][4][10][10][4];
struct Obj
{
    int x, y, d;
};
void move_one(Obj &o)
{
    int nx = o.x + dx[o.d];
    int ny = o.y + dy[o.d];
    if (maps[nx][ny] != '*')
    {
        o.x = nx;
        o.y = ny;
    }
    else
    {
        o.d = (o.d + 1) % 4;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 12; i++)
    {
        maps[0][i] = '*';
        maps[i][0] = '*';
        maps[11][i] = '*';
        maps[i][11] = '*';
    }
    Obj cow, fj;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> maps[i][j];
            if (maps[i][j] == 'C')
            {
                cow = {i, j, 0};
                maps[i][j] = '.';
            }
            else if (maps[i][j] == 'F')
            {
                fj = {i, j, 0};
                maps[i][j] = '.';
            }
        }
    }
    int t = 0;
    while (true)
    {
        if (vis[cow.x - 1][cow.y - 1][cow.d][fj.x - 1][fj.y - 1][fj.d])
        {
            cout << 0 << "\n";
            return 0;
        }
        vis[cow.x - 1][cow.y - 1][cow.d][fj.x - 1][fj.y - 1][fj.d] = true;
        move_one(cow);
        move_one(fj);
        t++;
        if (cow.x == fj.x && cow.y == fj.y)
        {
            cout << t << "\n";
            return 0;
        }
    }
}