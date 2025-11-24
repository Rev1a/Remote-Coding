#include<bits/stdc++.h>
using namespace std;string str;
void solve()
{
    int x;
        cin>>x;
        if(x==1)
        {
            string a;
            cin>>a;
            str = str + a;
            cout<<str<<"\n";
        }
        if(x==2)
        {
            int a,b;
            cin>>a>>b;
            str = str.substr(a,b);
            cout<<str<<"\n";
        }
        if(x==3)
        {
            int a;
            string b;
            cin>>a>>b;
            string t1 = str.substr(0,a);
            string t2 = str.substr(a);
            str = t1 + b + t2;
            cout<<str<<"\n";
        }
        if(x==4)
        {
            string s;
            cin>>s;
            for(int i=0;i<str.size();i++)
            {
                if(str.substr(i,s.size())==s)
                {
                    cout<<i<<"\n";
                    return;
                }
            }
            cout<<"-1\n";
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    
    cin>>str;
    while(q--)
    {
        solve();
    }
    return 0;
}