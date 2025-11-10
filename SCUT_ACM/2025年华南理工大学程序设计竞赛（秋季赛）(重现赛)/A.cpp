#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    string s;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int temp = s.size();
        for(int j=0;j<temp;j++)
        {
            if(s[j]-'0'==x)cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}