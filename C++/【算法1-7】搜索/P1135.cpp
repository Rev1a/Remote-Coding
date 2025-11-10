#include<bits/stdc++.h>
using namespace std;
int a[205];
int b[205];
bool vis[205];
int N,A,B;
queue<int> pos;
int main()
{
    memset(b, -1, sizeof(b)); 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

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
    return 0;
}