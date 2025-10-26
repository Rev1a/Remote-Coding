#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a;
    for(int i=1;i<=n;i++){
        a.push_back(i);

    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}