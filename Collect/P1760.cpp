#include<bits/stdc++.h>
using namespace std;
int a[5005];
int main()
{   
    int n,len=1;
    cin>>n;
    a[0]=1;
    for (int i = 0; i < n; ++i) {
        int carry = 0;
        for (int j = 0; j < len; ++j) {
            int tmp = a[j] * 2 + carry;
            a[j] = tmp % 10;
            carry = tmp / 10;
        }
        while (carry) {
            a[len++] = carry % 10;
            carry /= 10;
        }
    }
    int i = 0;
    while (a[i] == 0) i++; // 找到第一位非零
    a[0] -= 1;
    for (int k = 0; k < len; ++k) {
        if (a[k] < 0) {
            a[k] += 10;
            a[k+1] -= 1;
        }
    }
    for (int j = len-1; j >= 0; --j) cout << a[j];
    cout << endl;
    return 0;
}