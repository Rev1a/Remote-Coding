#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int k = sqrt(n);
    if(k==0)k=1;
    vector<int> a;
    for(int i=1;i<=n;)
    {
        int r = min(i+k-1,n);
        for(int j=r;j>=i;j--)
        {
            a.push_back(j);
        }
        i = r + 1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


