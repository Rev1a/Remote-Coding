#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    string a;
    cin>>a;
    int cnt[26]={0};
    for(char c : a){
        cnt [c-'a'] ++;
    }
    int maxn=0;
    int minn=INT_MAX;
    for(int i=0;i<26;i++){
        if(cnt[i]>0) {maxn=max(maxn,cnt[i]);minn=min(minn,cnt[i]);
        }}
    if(isPrime(maxn-minn)) {cout<<"Lucky Word"<<endl<<maxn-minn<<endl;
    return 0;}
    else{cout<<"No Answer"<<endl<<0<<endl;
    return 0;}
}