#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long a[100010]={0},b[100010]={0},sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        b[i] = b[i-1] + a[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum = sum + labs(b[i-1] - a[i]*(i-1));
    }
    cout<<sum*2<<"\n";
    return 0;
}