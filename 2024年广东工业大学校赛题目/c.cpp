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
        a[i].l-i-1;
        a[i].r-i-1;
    }
    while(pos<n+1)
    {   
        int temp_stop=0;
        if(a[pos].r<=a[pos+1].l && pos+1 <=n)
        {
            temp_stop=a[pos+1].l-a[pos].r;
            times+=1+temp_stop;
            pos++;
        }
        else
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<times;
    return 0;
}