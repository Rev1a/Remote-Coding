#include<bits/stdc++.h>
using namespace std;
struct bag
{
    double worth,weight;
    double per;
};
bool tmp(bag u,bag o)
{
    return u.per > o.per;
}
int main()
{
    int n,m;
    cin>>n>>m;
    bag a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].weight>>a[i].worth;
        a[i].per=a[i].worth/a[i].weight;
    }
    sort(a,a+n,tmp);
    int temp_worth=0;
    int temp_weight=0;
    for(int i=0;i<n;i++)
    {
        if(temp_weight+a[i].weight<m)
        {
            temp_worth+=a[i].worth;
            temp_weight+=a[i].weight;
        }
        else 
        {
            continue;
        }
        if(temp_weight>m)
        {
            temp_worth-=a[i].worth;
            break;
        }
    }
    cout<<temp_worth;
    return 0;
}
