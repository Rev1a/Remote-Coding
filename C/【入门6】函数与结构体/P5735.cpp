#include<bits/stdc++.h>
using namespace std;
using dd=double;
dd func(dd a,dd b,dd c,dd d){
    dd dis=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    return dis;
}

int main(){
    dd a1,a2,a3,a4,a5,a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    dd dis1=func(a1,a2,a3,a4);
    dd dis2=func(a3,a4,a5,a6);
    dd dis3=func(a1,a2,a5,a6);
    dd sum=dis1+dis2+dis3;
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}