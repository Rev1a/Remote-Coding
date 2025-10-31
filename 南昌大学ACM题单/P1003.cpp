#include<bits/stdc++.h>
using namespace std;
struct carpet
{
    int a,b,g,k;
};
int main()
{
    int n;
    cin>>n;
    carpet m[n];
    int x,y;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i].a>>m[i].b>>m[i].g>>m[i].k;
    }
    cin>>x>>y;
    for(int i=0;i<n;i++)
    {
        if(m[i].a<=x && x<=m[i].a+m[i].g)
        {
            if(m[i].b<=y && y<=m[i].b+m[i].k)
            {
                res=i+1;
            }
            else continue;
        }
        else continue;
    }
    if(res)cout<<res;
    else cout<<"-1";
    return 0;
}