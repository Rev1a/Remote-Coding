#include<bits/stdc++.h>
using namespace std;
int main(){
    string types;
    cin>>types;
    for(int i=0;i<types.size();i++){
       if((types[i]>='A' && types[i]<='Z') ||
        (types[i]>='a' && types[i]<='z')){cout<<types[i];}
        else{continue;}
    }
    return 0;
}