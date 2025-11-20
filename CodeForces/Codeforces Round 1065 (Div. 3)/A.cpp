#include <bits/stdc++.h>
using namespace std;
int dp[105]={0};
void solve()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"0\n";
        return;
    }
    int rnd = n / 4;
    int cnt = rnd;
    if(rnd-n)
    {
        cnt++;
    }
    cout<<cnt<<"\n";
    return;
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
