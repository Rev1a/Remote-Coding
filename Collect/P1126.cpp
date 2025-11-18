#include<bits/stdc++.h>
using namespace std;
int a[55][55];
int map[55][55];
bool vis[55][55][5];   //1  2  3  4 
                       //东 南 西 北

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {   
            int c;
            cin>>c;
            if(c==1)
            {
                a[i][j] = 1;
                a[i+1][j] = 1;
                a[i+1][j+1] = 1;
                a[i][j+1] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    int bx,by,ex,ey;
    char cha;
    cin>>bx>>by>>ex>>ey>>cha;
    int dire = 0;
    if(cha == 'E')dire = 1;
    if(cha == 'S')dire = 2;
    if(cha == 'W')dire = 3;
    if(cha == 'N')dire = 4;
    vis[bx][by][dire] = true;


























    
} 