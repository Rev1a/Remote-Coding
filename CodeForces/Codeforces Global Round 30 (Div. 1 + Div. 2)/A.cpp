#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int mins=INT_MAX;
    int maxs=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] > maxs)maxs = a[i];
        if(a[i] < mins)mins = a[i];
    }
    int x;
    cin>>x;
    if(mins <= x && x <= maxs)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}