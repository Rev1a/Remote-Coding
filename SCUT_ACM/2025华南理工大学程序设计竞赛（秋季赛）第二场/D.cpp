#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,3) == "hyw")
        {
            cnt++;
        }
        else
        {
            continue;
        }
    }
     cout<<cnt<<"\n";
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