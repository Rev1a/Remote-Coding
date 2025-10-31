#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main()
{
    int l,n;
    cin>>l>>n;
    int a[n];
    long double mid;
    long double mins=0,maxs=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {   
        long double as=min(a[i],l+1-a[i]);
        if(as>mins){mins=as;}
    }
    for(int i=0;i<n;i++)
    {   
        long double bs=max(a[i],l+1-a[i]);
        if(bs>maxs){maxs=bs;}
    }
    cout<<mins<<" "<<maxs;
    return 0;
}