#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,b;
    int i=0;
    int as[20],bs[20],c[20];
    while(i++ && i<=n)
    {
        int la=a.size();
        int lb=b.size();
        int as[20]={0},bs[20]={0};
        for(int i=0;i<la;i++)
        {
            as[la-i]=a[i]-'0';
        }
        for(int i=0;i<lb;i++)
        {
            bs[lb-i]=b[i]-'0';
        }
        for(int i=1;i<=la;i++)
        {
            for(int j=1;j<=lb;j++)
            {
                c[i+j-1]+=a[i]*a[j];
                c[i+j]=c[i+j-1]/10;
                c[i+j-1]%=10;
            }
        }
    }
}