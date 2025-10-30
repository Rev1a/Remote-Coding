#include<bits/stdc++.h>
using namespace std;
string a[21];
bool tmp(string a,string b)
{   
    return a + b > b + a;
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
    sort(a+1,a+n+1,tmp);
    for(int i=1;i<=n;i++)cout<<a[i];
    return 0;
}