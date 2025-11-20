#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int L=0,R=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            L++;
        }
        else
        {
            R++;
        }
    }
    int cnt=0,ans=0; 
    for(int i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if( cnt < 0)
        {
            cnt++;
            ans++;
        }
    }
    if(cnt > 0)
    {
        ans+=cnt;
    }
    cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}