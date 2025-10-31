#include<bits/stdc++.h>
using namespace std;
struct stu
{
    string str;
    int sis;
    int id;
};
bool tmp(stu a,stu b)
{
    if(a.sis!=b.sis){return a.sis > b.sis;}
    for(int i=0;i<a.str.size();i++)
    {
        if(a.str[i]==b.str[i]){continue;}
        else{return a.str[i] > b.str[i];}
    }
    return 0;
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    stu ss[n];
    for(int i=0;i<n;i++)
    {
        cin>>ss[i].str;
        ss[i].id=i+1;
        ss[i].sis=ss[i].str.size();
    }
    sort(ss,ss+n,tmp);
    cout<<ss[0].id<<"\n"<<ss->str;
    return 0;
}