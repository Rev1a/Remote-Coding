#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> se;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        se.insert(a);
    }
    cout<<se.size()<<endl;
    for(auto x : se)
    {
        cout<<x<<" ";
    }
    return 0;
}