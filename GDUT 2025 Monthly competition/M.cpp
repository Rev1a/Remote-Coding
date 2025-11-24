#include<bits/stdc++.h>
using namespace std;
int a[27];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string b;
    cin>>b;
    int len = b.size();
    for(int i=0;i<b.size();i++)
    {
        a[b[i]-96]++;
    }
    sort(a+1,a+27,greater<int>());
    for(int i=1;i<=min(k,26);i++)
    {
        if(a[i]>=3)
        {
            len-=a[i];
        }
    }
    cout<<len<<"\n";
    return 0;
}