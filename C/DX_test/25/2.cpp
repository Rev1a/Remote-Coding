#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int Maxs = 0;
    int Mins = 32767;
    int num1,num2;
    for(int i = 0;i < 5;i ++){
        cin>>arr[i];
        if(Maxs < arr[i]){Maxs = arr[i]; num1 = i;}
        if(Mins > arr[i]){Mins = arr[i]; num2 = i;}
    }
    swap(arr[num1],arr[num2]);
    for(int i = 0 ; i < 5 ; i ++ ){
        cout<<arr[i];
    }
    return 0;
}