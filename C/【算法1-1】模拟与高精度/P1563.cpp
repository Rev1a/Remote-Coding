#include<bits/stdc++.h>
using namespace std;
struct model
{
    int side;
    string job;
    int id;
};

int main()
{
    int n,m;
    cin>>n>>m;
    model mol[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>mol[i].side>>mol[i].job;
        mol[i].id=i;
    }
    int pos=1;
    for(int i=0;i<m;i++)
    {
        int q,p;
        cin>>q>>p;
        if(mol[pos].side==0)
        {
            if(q==0)
            {
                pos-=p;
            }
            else
            {
                pos+=p;
            }
        }
        else
        {
            if(q==0)
            {
                pos+=p;
            }
            else
            {
                pos-=p;
            }
        }
        if(pos<1 || pos >n)
        {
            if(pos<1)
            {
                pos=n-fabs(pos);
            }
            else
            {
                pos=pos-n;
            }
        }
    }
    cout<<mol[pos].job;
    return 0;
}