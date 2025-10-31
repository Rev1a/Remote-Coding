#include<iostream>
using namespace std;
void add_one(int *arr,int n){
    int *p=arr;
    for(int i=0;i<n;i++){
    *(p+i)+=1;    
    }
}
int main(){
    int n=100;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    add_one(arr,n);
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    return 0;
}