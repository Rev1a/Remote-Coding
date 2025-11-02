#include<bits/stdc++.h>
using namespace std;
void solve ()
{
    int n;
    vector<int> a(n+2);
    int b[6];
    int store[6];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=5;i++)cin>>b[i];
    if(3*a[1] <= b[1])
    {
        store[1] = 3 * a[1];
    }
    else
    {
        store[1] = (b[1]/3) * 3;
    }
    if(store[1] * 2 < b[2])
    {
        store[2] = 2 * 3 * a[2];
    }
    else
    {
        
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}