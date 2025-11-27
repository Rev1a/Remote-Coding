#include<bits/stdc++.h>
using namespace std;
int a[15];
int n;
void dfs(int dep,int cur)
{
    if(dep == 11 && cur == n)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<a[i]<<" "[i!=10];
        }
        cout<<"\n";
        return;
    }
    for(int i=1;i<=3;i++)
    {
        a[dep] = i;
        dfs(dep+1,cur+i);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    dfs(1,0);

    return 0;
}