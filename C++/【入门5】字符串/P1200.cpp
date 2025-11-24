#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin>>a>>b;
    ll s1 = 1,s2 = 1;
    for(int i=0;i<a.size();i++)
    {
        int t1 = a[i] - 64;
        s1 = s1 * t1 % 47;
    }
    for(int i=0;i<b.size();i++)
    {
        int t2 = b[i] - 64;
        s2 = s2 * t2 % 47;
    }
    if(s1==s2)
    {
        cout<<"GO\n";
    }
    else 
    {
        cout<<"STAY\n";
    }
    return 0;
}