#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int wa;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>wa;
        a.push_back(wa);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}