#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    int sum[100]={0};
    int a[55][80]={0};
    a[0][1]=1;
    for(int i=1;i<=n;i++)
    {   
        int temp = 0;
        for(int j=1;j<=70;j++)
        {   
            int s = a[i-1][j] * i + temp;
            a[i][j] = s % 10;
            temp = s / 10;
        }
    }
    int len = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=70;j++)
        {
            sum[j] += a[i][j];
            if( j> len && a[i][j])
            {
                len = j;
            }
        }
    }
    for(int i=1;i<=len;i++)
    {
        sum[i+1] += sum[i]/10;
        sum[i] %= 10;
    }
    while (sum[len] == 0 && len > 1) len--; 
    for (int i = len; i >= 1; i--) cout << sum[i];
    return 0;
}