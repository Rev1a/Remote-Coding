#include<bits/stdc++.h>
using namespace std;
int main(){
    int Bulls=0,Cows=0;
    int sec_num=0,gue_num=0;
    string a,b;
    cout<<"secret = ";
    cin>>a ;cout<<",guess=";cin>>b;
    cout<<'"'<<endl;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i])Bulls++;
    }
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j] && i!=j){Cows++;}
        }
    }
    cout<<Bulls<<"A"<<Cows<<"B";
    return 0;
}