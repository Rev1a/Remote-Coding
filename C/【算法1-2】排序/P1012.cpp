#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
struct fir
{
    int id;
    int fi;
    int len=0;
};
bool tmp(fir a, fir b)
{
    a.fi > b.fi;
}
int main()
{
    int n;
    int a[n];
    fir b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        b[i].id=i;
        while(temp/10)
        {
            temp/=10;
            b[i].len++;
        }
        b[i].fi=temp;
    }
    sort(b,b+n,tmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[b[i].id];
    }
    return 0;
}