#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){   
        if(n%i==0) return 0;
    }
    return 1;
}
using ll=long long;
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    for(int i=0;i<n;i++){
       bool Prime=isPrime(vec[i]);
       if(Prime){cout<<vec[i]<<" ";}
       else continue;
    }
    return 0;
}