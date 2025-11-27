#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n+1);
    a[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i] = a[i] + a[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int c,d;
        cin>>c>>d;
        int temp = a[d] - a[c-1];
        cout<<temp<<"\n";
    }
    return 0;
}