#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<3 || n%2==0 || n>=100){cout<<"?你在干什么"<<endl;return 0;}
    int arr[105][105]={0};
    int n1=n+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n1 || i==j){arr[i][j]=1;}
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(arr[i][j]==1){cout<<"*";}
           else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}