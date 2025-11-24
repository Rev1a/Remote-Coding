#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> str(n+n-1);
    for(int i=0;i<str.size();i++)
    {
        cin>>str[i];
    }
    vector<char> sc;
    for(int i=0;i<m;i++)
    {
        char x = 0;
        for(int j=0;j<n+n-1;j++)
        {
            x ^= str[j][i];
        }
        sc.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cout<<sc[i];
    }
    cout<<"\n";
    return;
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