#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a;
    cin>>a;
    int len=a.size();
    int cnt=0;
    for(int i=0;i<len/2;i++)
    {
        if(a[i]==a[len-1-i])
        {
            continue;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
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