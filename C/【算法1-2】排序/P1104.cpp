#include<bits/stdc++.h>
using namespace std;
struct stu
{
    string str;
    int y,m,d;
    int id;
};
bool tmp(stu a,stu b)
{
    if(a.y != b.y) return a.y < b.y;
    if(a.m != b.m) return a.m < b.m;
    if(a.d != b.d) return a.d < b.d;
    return a.id > b.id;
}
int main()
{
    int n;
    cin>>n;
    stu s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].str>>s[i].y>>s[i].m>>s[i].d;
        s[i].id=i+1;
    }
    sort(s,s+n,tmp);
    for(int i=0;i<n;i++)
    {
        cout<<s[i].str<<"\n";
    }
    return 0;
}