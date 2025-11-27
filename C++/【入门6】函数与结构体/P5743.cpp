#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int res = 1;
    for(int i=1;i<n;i++)
    {
        res+=1;
        res = res * 2;
    }
    cout<<res;
    return 0;
}

// 1 4 10 22 