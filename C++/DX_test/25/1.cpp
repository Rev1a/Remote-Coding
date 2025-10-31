#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1 || n%2==0 || n>100){cout<<"?你在干什么";}
    else{
         for(int i=1;i<=((n-1)/2);i++){
            for(int j=(n-1)/2;j>(i-1);j--){cout<<" ";}
            for(int k=0;k<(2*i)-1;k++){cout<<"*";}
            cout<<endl;
         }
         for(int i=0;i<n;i++){cout<<"*";}
         cout<<endl;
         for(int i=1;i<=((n-1)/2);i++){
             for(int j=0;j<i;j++){cout<<" ";}
             for(int k=n-2;k>2*(i-1);k--){cout<<"*";}
            cout<<endl;
         }
}
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 输入校验
    if (n == 1 || n % 2 == 0 || n > 100) {
        cout << "?你在干什么";
        return 0;
    }

    int mid = n / 2; // 中心行索引

    // 上半部分（不含中间行）
    for (int i = 0; i < mid; ++i) {
        cout << string(mid - i, ' ')          // 前导空格
             << string(2 * i + 1, '*')        // 星号
             << '\n';
    }

    // 中间行
    cout << string(n, '*') << '\n';

    // 下半部分
    for (int i = mid - 1; i >= 0; --i) {
        cout << string(mid - i, ' ')          // 前导空格
             << string(2 * i + 1, '*')        // 星号
             << '\n';
    }

    return 0;
}
*/