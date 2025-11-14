#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>

using namespace std;
using ll =long long;

ll maxRes(int a[],int b[],ll m){
    ll res=a[m];
    for(ll i=0;i<1000001;i++){
        if(2*i>m)break;
        res=max((ll)(a[i]+b[m-2*i]),res);
    }
    return res;
}

int main(){

    ll n,m,temp,ans=0;
    cin>>n>>m;
    int left[1000001]={0},right[1000001]={0};
    for(ll i=0;i<n;i++){
        cin>>temp;
        if(temp>0)right[temp]=1;
        else if(temp<0)left[-temp]=1;
        else if(temp==0)ans++;
    }
    for(ll i=1;i<1000001;i++)right[i]+=right[i-1];
    for(ll i=1;i<1000001;i++)left[i]+=left[i-1];
    ans+=max(maxRes(right,left,m),maxRes(left,right,m));
    cout<<ans;

    return 0;
}