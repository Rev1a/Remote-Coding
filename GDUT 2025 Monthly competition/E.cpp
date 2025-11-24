#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];            //田
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];           //齐
    }
    int t=0,q=0;
    long long sum = 0;
    while(true)
    {   
        
        if(a[t]<=b[q])
        {
            q++;
        }
        else
        {   
            sum += b[q];
            q++;
            t++;
        }
        if(t==n || q==m)
        {
            break;
        }
    }
    cout<<sum;
    return 0;
}