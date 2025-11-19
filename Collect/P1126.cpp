#include <bits/stdc++.h>
using namespace std;
int a[55][55] = {0};
bool vis[55][55][5]; // 1  2  3  4
                     // 东 南 西 北
int dx[] = {0, 0, 1, 0, -1};
int dy[] = {0, 1, 0, -1, 0};
struct position
{
    int x, y, dir, stp;
};
queue<position> pos;
bool isInline(int x, int y, int N, int M)
{
    if (x < 1 || x >= N || y < 1 || y >= M)
    {
        return false;
    }
    return a[x][y] == 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int c = 0;
            cin >> c;
            if (c == 1)
            {
                a[i][j] = 1;
                a[i][j - 1] = 1;
                a[i - 1][j] = 1;
                a[i - 1][j - 1] = 1;
            }
        }
    }
    int bx, by, ex, ey;
    char cha;
    cin >> bx >> by >> ex >> ey >> cha;
    int dire = 0;
    if (cha == 'E')
        dire = 1;
    if (cha == 'S')
        dire = 2;
    if (cha == 'W')
        dire = 3;
    if (cha == 'N')
        dire = 4;
    vis[bx][by][dire] = true;
    pos.push({bx, by, dire, 0});
    while (!pos.empty())
    {
        auto cur = pos.front();
        pos.pop();
        int x = cur.x;
        int y = cur.y;
        int dir = cur.dir;
        int step = cur.stp;
        if (x == ex && y == ey)
        {
            cout << step << "\n";
            return 0;
        }

        for (int i = 1; i <= 3; i++)
        {
            int nx = x + dx[dir] * i;
            int ny = y + dy[dir] * i;
            bool path_blocked = false;
            for (int j = 1; j <= i; j++)
            {
                int checkx = x + dx[dir] * j;
                int checky = y + dy[dir] * j;
                if (!isInline(nx, ny, n, m))
                {   
                    path_blocked = true;
                    break;
                }
                
                
            }
            if(path_blocked)
            {
                break;
            }
            if (!vis[nx][ny][dir]) 
            {
                vis[nx][ny][dir] = true;
                pos.push({nx, ny, dir, step + 1});
            }



        }    
            int new_dir_left = (dir == 1) ? 4 : dir - 1;
            if (!vis[x][y][new_dir_left])
            {
                vis[x][y][new_dir_left] = true;
                pos.push({x, y, new_dir_left, step + 1});
            }
            int new_dir_right = (dir == 4) ? 1 : dir + 1;
            if (!vis[x][y][new_dir_right])
            {
                vis[x][y][new_dir_right] = true;
                pos.push({x, y, new_dir_right, step + 1});
            }
        
    }
    cout << "-1\n";
    return 0;
}