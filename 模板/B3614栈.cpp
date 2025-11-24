#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
void solve()
{
    int n;
    cin>>n;
    stack<ll> as;
    while(n--)
    {
        string a;
        cin>>a;
        if(a=="push")
        {
            ll w;
            cin>>w;
            as.push(w);
        }
        else if(a=="query")
        {
            if(as.empty())
            {
                cout<<"Anguei!\n";
            }
            else
            {
                cout<<as.top()<<"\n";
            }
        }
        else if(a=="size")
        {
            cout<<as.size()<<"\n";
        }
        else if(a=="pop")
        {
            if(as.empty())
            {
                cout<<"Empty\n";
            }
            else
            {
                as.pop();
            }
        }
    }
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