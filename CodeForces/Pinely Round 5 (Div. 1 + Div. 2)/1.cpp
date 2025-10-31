#include<iostream>
using namespace std;
struct score
{
    int R,D,X,n;
    string match;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        score a;
        int cnt=0;
        cin>>a.R>>a.X>>a.D>>a.n;
        cin>>a.match;
        
        for(int j=0;j<a.match.size();j++)
        {
            if(a.match[j]=='1')
            {
                cnt++;
                if(a.R>=a.X)
                {
                    if((a.R-a.D)>=0)a.R-=a.D;
                    else a.R=0;
                }
            }
            if(a.match[j]=='2')
            {
                if(a.R>=a.X)
                {
                    continue;
                }
                else
                {
                    cnt++; 
                    if((a.R-a.D)>=0)a.R-=a.D;
                    else a.R=0;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}