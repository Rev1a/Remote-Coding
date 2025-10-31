#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int num=0;
        for(int j=i-1;j>=0;j--){
            if(a[j]<a[i]){
                num++;
            }
        }
        cout<<num<<" ";;
    }
    return 0;
}