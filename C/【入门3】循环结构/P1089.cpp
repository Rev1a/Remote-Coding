#include<bits/stdc++.h>
using namespace std;
int main(){
    int stored=0;
    int budget=0;
    int n=300;
    int i=1;
    int mum=0;
    while(cin>>budget){
        int temp=0;temp=stored+n;
        if(temp>=budget){
            stored=stored-budget+300;
            i++;
        }
        else{
            cout<<"-"<<i<<endl;
            return 0;
        }
        if(stored>100){
           int nums=stored/100;
           stored=stored-nums*100;
           mum=mum+nums*100;
        }
    }
    mum=mum*1.2;
    cout<<mum+stored<<endl;
    return 0;
}
