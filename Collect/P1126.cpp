#include <bits/stdc++.h>
using namespace std;
const int Maxs = 55;
int n, m, sx, sy, tx, ty;
bool mp[Maxs][Maxs];
bool vis[Maxs][Maxs][4];
char ts;
struct R
{
    int x,y,s,d;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int t;
            cin >> t;
            while (t)
            {
                mp[i][j] = mp[i - 1][j] = mp[i][j - 1] = mp[i - 1][j - 1];
            }
        }
    }
    queue<R> Q;
    cin>>sx>>sy>>tx>>ty>>ts;
    R t1;
    t1.x = sx;
    t1.y = sy;
    t1.s = 0;
    if(ts = 'N')t1.d = 0;
    if(ts = 'E')t1.d = 1;
    if(ts = 'S')t1.d = 2;
    if(ts = 'W')t1.d = 3; 
    Q.push(t1);
    while(!Q.empty())
    {
        t1 = Q.front();
        vis[t1.x][t1.y][t1.d] = 1;
        if(t1.x == tx && t1.y == ty)
        {
            cout<<t1.s;
        }
    }
    return 0;
}