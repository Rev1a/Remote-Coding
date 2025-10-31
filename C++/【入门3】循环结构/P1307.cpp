#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long temp=0;
    bool a=false;
    while(n<0){
        n=-n;
        a=true;
    }
    while(n>0){
        temp=temp*10+n%10;
        n/=10;
    }
    if(a)temp=-temp;
    cout<<temp;
    return 0;
}