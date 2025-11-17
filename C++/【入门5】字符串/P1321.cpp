#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin>>a;
    int boy=0,girl=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='b' || a[i+1]=='o' || a[i+2]=='y')
        {
            boy++;
        }
        if(a[i]=='g' || a[i+1]=='i' || a[i+2]=='r' || a[i+3]=='l')
        {
            girl++;
        }
    }
    cout<<boy<<"\n"<<girl;
    return 0;
}