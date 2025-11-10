#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
int a[205];
int b[205];
bool vis[205];
int N,A,B;
queue<int> pos;
=======
bool vis[205];
vector<int> flr(205);
int cnt = 0;
void bfs(int u)
{
    if(u==b)
    {

        cout<<cnt;
    }
    for(int i=0;i<n;i++)
    {
        
    }
}
>>>>>>> ca5a5f9c307911467fa16d34635e5ef293d141a6
int main()
{
    memset(b, -1, sizeof(b)); 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
<<<<<<< HEAD
    

    cin>>N>>A>>B;
    for(int i=1;i<=N;i++)
    {
         cin>>a[i];
    }
    

    pos.push(A);
    b[A]=0;
    vis[A] = true;

    while(!pos.empty())
    {   
        int cp = pos.front();
        for(int i=-1;i<=1;i+=2)
        {
            int np = i * a[cp] + cp;
            if(np >=1 && np<=N && !vis[np])
            {   
                b[np] = b[cp] + 1;
                pos.push(np);
                vis[np] = true;
            }
        }
        pos.pop();
    }

    if(b[B] != -1   )
    {
        cout<<b[B];
    }
    else
    {
        cout<<-1;
    }
=======
    int n,a,b;
    cin>>n>>a>>b;
  
    for(int i=0;i<n;i++)
    {
        cin>>flr[i];
    }
    bfs(a);
>>>>>>> ca5a5f9c307911467fa16d34635e5ef293d141a6
    return 0;
}