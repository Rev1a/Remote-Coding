#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;               // 先输入数组长度
    int *arr = new int[n];  // 动态申请数组
    int *p = arr;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=*(p+i);
    }
    cout<<(double)sum/n;
    return 0;
}

/*
动态数组必须在读入长度后创建

求平均数要用元素数量 n，不能用 sizeof(arr)

指针访问数组元素用 *(p + i) 或 arr[i] 都可以

用 delete[] arr 释放动态内存，防止内存泄漏
*/