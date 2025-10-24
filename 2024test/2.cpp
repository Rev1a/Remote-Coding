#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"原始数组："<<endl;
    for(int i=0;i<5;i++){

        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    reverse(arr,arr+5);
    cout<<"逆序数组："<<endl;
    for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
    return 0;
}