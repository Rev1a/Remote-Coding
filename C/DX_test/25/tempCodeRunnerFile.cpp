#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1 || n%2==0 || n>100){cout<<"?你在干什么";}
    else{
         for(int i=1;i<=((n-1)/2);i++){
            for(int j=(n-1)/2;j>(i-1);j--){cout<<" ";}
            for(int k=0;k<(2*i)-1;k++){cout<<"*";}
            cout<<endl;
         }
         for(int i=0;i<n;i++){cout<<"*";}
         cout<<endl;
         for(int i=1;i<=((n-1)/2);i++){
             for(int j=0;j<i;j++){cout<<" ";}
             for(int k=n-2;k>2*(i-1);k--){cout<<"*";}
            cout<<endl;
         }
}
}