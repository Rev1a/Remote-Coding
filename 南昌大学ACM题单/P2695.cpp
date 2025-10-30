#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int a[n]={0};
    int b[m]={0};
    if(m<n){cout<<"you died!";return 0;}
    for(int x=0;x<n;x++)cin>>a[x];
    for(int x=0;x<m;x++)cin>>b[x];
    sort(a,a+n);
    sort(b,b+m);
    int cnt=n;
    int sum=0;
    int i=0,j=0;
    while(i<n && j<m)
    {   
        if(a[i]<=b[j])
        {
            cnt--;
            sum+=b[j];
            i++;
            j++;
        }
        else
        {
            j++;
        }

      
    }
    if(i!=n)
    {
        cout<<"you died!";
    }
    else 
    {
        cout<<sum;
    }
    return 0;
}