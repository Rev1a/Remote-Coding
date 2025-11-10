#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
  
    for(int i=0;i<n;i++)
    {
        cin>>flr[i];
    }
    bfs(a);
    return 0;
}