/*#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int sum=0;
    for(int *p = arr.data();p<arr.data()+n;p++){
        sum+=*p;
    }
    std::cout<<sum<<std::endl;
    return 0;

} */
#include<bits/stdc++.h>
void reverse(int *p,int n){
    int *q=p+n-1;
    while(p<q){
        swap(*p,*q);
        p++;q--;
    }
}
int main(){
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    if(n%2==0){std::cout<<"?";return 0;}
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int *p=arr.data();
    reverse(p,n);
    for(int *x=arr.data();x<arr.data()+n;x++){
            std::cout<<*x<<" ";
    }
    std::cout<<std::endl;
    return 0;
    
}