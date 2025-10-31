#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    string a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    while(n--)
    {
        int first,end;
        cin>>first>>end;
        string min="999999999999";
        for(int i=first-1;i<end-1;i++)
        {
            if(a[i]<min){min=a[i];}
        }
        cout<<min<<" ";
    }
    return 0;
}