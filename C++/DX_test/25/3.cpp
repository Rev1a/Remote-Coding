#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
  
    for(int i=0;i<T;i++){  
        int diff=0;
        string a,b;  
        cin>>a>>b;
        int len=min(a.size(),b.size());
        if(fabs(a.size()-b.size())>1){cout<<"not similar"<<endl;}
        else if(fabs(a.size()-b.size())==1){
            diff=0;
            for(int i=0;i<len;i++){
                if(a[i]!=b[i]){diff++;}
                if(diff==2){cout<<"not similar"<<endl;break;}
            }
            if(diff==0){cout<<"similar"<<endl;}
            else{cout<<"not similar"<<endl;}
        }
        else if(a.size()==b.size()){
            diff=0;
            for(int i=0;i<a.size();i++){
                if(a[i]!=b[i]){diff++;}
                if(diff==2){cout<<"not similar"<<endl;}
            }
            cout<<"similar"<<endl;
        }
    
}return 0;}