#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    auto cnt=0;
    for(int i=a;i<=b;i++)
    {
        string str=to_string(i);
        for(int j=0;j<str.size();j++)
        {
            if(str[j]=='2')
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}