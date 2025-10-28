#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int al=a.size();
    int bl=b.size();
    int as[2005],bs[2005];
    int cs[4005]={0};
    for(int i=0;i<al;i++)
    {
        as[al-i]=a[i]-'0';
    }
    for(int i=0;i<bl;i++)
    {
        bs[bl-i]=b[i]-'0';
    }
    for(int i=1;i<=al;i++)
    {
        for(int j=1;j<=bl;j++)
        {
            cs[i+j-1]+=as[i]*bs[j];
            cs[i+j]+=cs[i+j-1]/10;
            cs[i+j-1]%=10;
        }
    }
    int lc=a.size()+b.size();
    while(lc>1 && cs[lc]==0)
    {
        lc--;
    }
    for(int i=lc;i>=1;i--)
    {
        cout<<cs[i];
    }
    return 0;
}