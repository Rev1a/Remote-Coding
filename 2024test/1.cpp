#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            for(int u=2*n-1;u>=2*(j-1);u--){cout<<"  ";}
            for(int m=1;m<=1+4*(j-1);m++){cout<<" *";}
            cout<<endl;
        }
        a++;
    }
    for(int k=0;k<n+1;k++){
        for(int i=0;i<2*n-1;i++){cout<<"  ";}cout<<" * * *"<<endl;
    }
    cout<<endl;
    cout<<"Merry Christmas !";
    return 0;
}