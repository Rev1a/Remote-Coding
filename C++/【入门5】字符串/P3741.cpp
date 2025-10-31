#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    s=" "+s;
    int nums=0;
    int nope=0;
    for(int i=0;i<=n;i++){
        if(s[i]=='K' && s[i-1]=='V'){nums++;}
        if(i>=2 && (s[i]=='K' && s[i-1]=='K')){nope++;}
    }
    if(nope>0){cout<<nums+1;}
    else{cout<<nums;}
    return 0;
}