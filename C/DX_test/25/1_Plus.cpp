#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid=n/2;
    if(n==1 || n%2==0 || n>100){cout<<"?你在干什么";}
    else{
         for(int i=1;i<=mid;i++){
            for(int j=mid-i;j>=0;j--){cout<<" ";}
            for(int k=1;k<2*i;k++){cout<<"*";}
            cout<<endl;
         }
         for(int n=0;n<mid-1;n++){
            for(int j=0;j<=n+1;j++){cout<<" ";}
            for(int k=mid-2*n;k>0;k--){cout<<"*";}
            cout<<endl;
         }
}
return 0;
}