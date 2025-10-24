#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int del=0;
    int cou=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int up,down;
    cin>>down>>up;
    if(sum>(up*n) || sum<(down*n))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>up){del+=arr[i]-up;}
        if(arr[i]<down){cou+=down-arr[i];}
        else{continue;}
    }
    cout<<max(del,cou);
    return 0;
}