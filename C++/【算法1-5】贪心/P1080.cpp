#include<bits/stdc++.h>
using namespace std;
int a[4004],b[4004];
struct Humble
{
    int l,r;
}D[1005];
bool cmp(Humble a ,Humble b)
{
    return a.l*a.r < b.l*b.r;
}
int mian()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>D[i].l>>D[i].r;
    }
    sort(D+1,D+1+n,cmp);
    for(int i=1;i<=n;i++)
    {
        count();
        
    }
}