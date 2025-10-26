#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int num=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a'&&a[i]<='z' || a[i]>='A'&&a[i]<='Z' || a[i]>='0'&&a[i]<='9'){
            num++;
        }
    }
    cout<<num<<endl;
    return 0;
}