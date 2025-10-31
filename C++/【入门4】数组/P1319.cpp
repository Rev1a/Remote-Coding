#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums;
    int x;
   while(cin>>x){
         nums.push_back(x);
   }
   vector<int> data;
   int cur=0;
    for(int len: nums){
        for(int i=0;i<len;i++){
            data.push_back(cur);
            
        }
        cur=1-cur;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<data[i*n+j];
        }
        cout<<endl;
    }
    return 0;
}