#include <bits/stdc++.h>
using namespace std;
#define ll long long
int dp[105]={0};
void solve()
{
    ll n;
    cin>>n;
    ll sum = 0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==-1 && a[n-1]==-1)
    {
        a[0]=a[n-1]=0;
    }
    else if(a[0]==-1)
    {
        a[0] = a[n-1];
    }
    else if(a[n-1]==-1)
    {
        a[n-1] = a[0];
    }
    for (int i = 1; i < n-1; i++) 
    {
        if (a[i] == -1) a[i] = 0;
    }
    cout << abs(a[n-1] - a[0]) << "\n";
    for(auto x:a)cout<<x<<" ";
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) 
    {
        solve();
    }
    return 0;
}
