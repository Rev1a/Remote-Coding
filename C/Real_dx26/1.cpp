#include<iostream>

using namespace std;

int main(){

    int n;

    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=i;j<n;j++){cout<<" ";}  //输出数字前的空格

        for(int k=1;k<=i;k++){cout<<k;}   //输出1到n的数字

        for(int m=i-1;m>0;m--){cout<<m;}    //输出n-1到1的数字

        cout<<endl;

    }

    return 0;
}

//超过9之后好像就不等腰了