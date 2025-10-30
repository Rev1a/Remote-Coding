#include<bits/stdc++.h>
using namespace std;
string a[21];
bool tmp(string a,string b)
{
    for(int i=0;i<=min(a.size(),b.size());i++)
    {
        if(a[i]==b[i])continue;
        else
        {
            return a[i] > b[i];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int w;
        cin>>w;
        a[i]=to_string(w);
    }
    sort(a,a+n,tmp);
    for(int i=1;i<=n;i++)cout<<a[i];
    return 0;
}