#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool tmp(int a,int b)
{
    return a > b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,b;
    ll sum=0;
    cin>>n>>b;
    int cnt=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,tmp);
    for(int i=0;i<n;i++)
    {   
        if(sum>=b){break;}
        sum+=arr[i];
        cnt++;
    }
    cout<<cnt;
    return 0;
}