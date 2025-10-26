#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;int round=0;
    int a=1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;j++){ 
            if(round==n)continue;
           if(a<10)cout<<"0"<<a;
           else cout<<a;
            a++;
           
        }
        cout<<endl;
    }
    cout<<endl;
    a=1;int num=0;
    for(int i=1;i<=n;i++){
        cout<<string(2*(n-i),' ');
        for(int j=1;j<=i;j++){
        cout<<setw(2)<<setfill('0')<<a++;
        }
        cout<<endl;
    }
    return 0;
}