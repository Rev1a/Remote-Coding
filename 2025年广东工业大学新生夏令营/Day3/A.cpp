#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i]-'0';
    }
    int temp;
    while (sum>=10)
    {  
        temp=0;
        a = to_string(sum);
        for(int i=0;i<a.size();i++)
        {
            temp+=a[i]-'0';
        }
        if(temp<sum){sum=temp;}
    }
    cout<<sum<<"\n";
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