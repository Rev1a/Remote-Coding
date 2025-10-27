#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x,y,z;
};
double high(point a,point b)
{
    double temp=sqrt(((a.x-b.x)*(a.x-b.x))
                +
                ((a.y-b.y)*(a.y-b.y))
                +
                ((a.z-b.z)*(a.z-b.z)));
    return temp;
}
bool tmp(point &c,point &d)
{
    return c.z < d.z;
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    point p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].x>>p[i].y>>p[i].z;
    }
    sort(p,p+n,tmp);
    double h=0;
    for(int i=0;i<n-1;i++)
    {
        h+=high(p[i],p[i+1]);
    }
    cout<<fixed<<setprecision(3)<<h<<"\n";
    return 0;
}