#include<bits/stdc++.h>
using namespace std;
void solve ()
{
    int n;
    cin>>n;
    int l=0,r=0;
    bool exist=false;
    vector<int> a(n+5);
    for(int i=1;i<=n;i++)
    {   
        cin>>a[i];
    }
    if(n<3)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=2;i<=n-1;i++)
    {   
        if(a[i] > min(a[i-1],a[i+1]) && a[i] < max(a[i+1],a[i-1]))
        {
            exist = true;
            break;
        }
    }
    if(exist)
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
    int T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}