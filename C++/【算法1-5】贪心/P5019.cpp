#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int cns = a[0];
    for(int i=1;i<n;i++)
    {
        int temp = a[i] - a[i-1];
        if(temp > 0)cns+=temp;
        else continue;
    }
    cout<<cns<<"\n";
    return 0;
}