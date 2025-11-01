#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{   

    vector<int> arr(n),prefix(n+1);
    for(auto &x:arr)cin>>x;
    partial_sum(arr.begin,arr.end(),prefix.begin()+1);
}