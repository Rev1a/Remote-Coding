#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string  a;
    cin>>a;
    long long cnt=0;
    long long sumpos=0;
    long long sum=0;
    int mods=1000000007;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            sum=(sum+(cnt*i-sumpos)%mods+mods)%mods;
            cnt++;
            sumpos+=i;
        }
    }
    cout<<sum%mods;
    return 0;
}