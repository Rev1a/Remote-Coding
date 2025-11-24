#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin>>a;
    int cnt = 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='0')
        {
            cnt++;
        }
    }
    if(cnt%2==0)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}