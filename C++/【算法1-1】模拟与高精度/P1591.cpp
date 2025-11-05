#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a;
    cin>>n>>a;
    int arr[3000]={0};
     arr[1] = 1;
    int len = 1;
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        int carry = 0 ;    //保存进位
        for(int j=1;j<=len;j++)
        {
            int s  = arr[j] * i + carry;
            arr[j] = s % 10;
            carry  = s / 10;
            
        }
        while(carry)
        {
            arr[++len] = carry % 10;
            carry /= 10;
        }
    }
    for(int i=1;i<=len;i++)
    {
        if(arr[i]==a)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}