#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    int tow=0;
    while(cin>>b)
    {   
        tow++;
        a += b;
    }
    cout<<tow<<" ";
    char eg = '0';
    int cnt = 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==eg)
        {
            cnt++;
        }
        else
        {
            cout<<cnt<<" ";
            eg = a[i];
            cnt = 1;
        }
    }
    cout<<cnt;
    return 0;
}