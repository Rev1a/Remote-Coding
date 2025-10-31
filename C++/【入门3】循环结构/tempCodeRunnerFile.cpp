#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    unsigned long long sum=0;
    cin>>n;
    unsigned long long temp_sum=1;
    if(n==1){cout<<1<<endl;return 0;}
   
        for(int i=1;i<=n;i++){temp_sum=i*i;
        sum+=temp_sum;
      }
    
    cout<<sum<<endl;
    return 0;
}
//使用此代码无法通过所有测试点
//To be Brief,爆longlong范围了，得使用高精度算法