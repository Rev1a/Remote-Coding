#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool hp;
    int n;
    cin>>n;
    set<int> s;
    int a[n];
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        s.insert(abs(a[i]-a[i-1]));
    }
    if(s.size()<n-1){hp=false;}
    else
    {
        if(*s.rbegin() == n-1)
        {
            hp=true;
        }
        else hp=false;
    }
    if(hp){cout<<"Jolly";}
    else{cout<<"Not jolly";}
    return 0;
}