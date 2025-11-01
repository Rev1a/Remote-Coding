#include<bits/stdc++.h>
using namespace std;
struct blank
{
    int l,r;
}
a[10005];
int main()
{
    int n;
    cin>>n;
    int pos=0;
    a[0].r=0;
    int times=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
        a[i].l;
        a[i].r;
    }
    int stay=0;
    while(pos<n+1)
    {   
        int times=0;
        if(a[pos+1].l <= a[pos].r+1 && a[pos+1].l < a[pos+1].r)
        {
            int dis = a[pos+1].l - a[pos].l -1;
            times+=dis;
            pos++;
        }
        else
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<times+n;
    return 0;
}