#include<bits/stdc++.h>
using namespace std;
vector<int> years;
void isRun(int x)
{
    if(x%100==0)
    {
        if(x%400==0)
        {
            years.push_back(x);
        }
    }
    else
    {
        if(x%4==0)
        {
            years.push_back(x);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        isRun(i);
    }
    cout<<years.size()<<"\n";
    for(auto x:years)
    {
        cout<<x<<" ";
    }
    return 0;
}