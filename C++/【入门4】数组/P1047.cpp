#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m;
    cin>>l>>m;
    int a[10005];
    for(int i=0;i<=l;i++){
        a[i]=1;
    }
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        for(int j=u;j<=u;j++){
            a[j]=0;
        }
    }
    int remain=0;
    for(int i=0;i<=l;i++){
        remain+=a[i];
    }
    cout<<remain<<endl;    
    return 0;
}