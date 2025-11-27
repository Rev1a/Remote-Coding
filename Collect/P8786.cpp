/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll> sets;
    ll a;
    unsigned long long sum = 0;
    while(cin>>a)
    {
        sets.push_back(a);   
    }
    ll n = sets.size();
    for(ll i = 0;i<(1<<n);i++)
    {
        vector<ll> subsets;
        for(ll j=0;j<n;j++)
        {
            if (i & (1 << j)) 
            {  
                subsets.push_back(sets[j]);
            }
        }
        for(int j=0;j<subsets.size();j++)
        {
            sum += subsets[j];
        }
    }
    cout<<sum<<"\n";
    return 0;
}
    */
   //    上面注释的是枚举每个子集的做法
   
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;vector<ll> sets;
    ll sum = 0;
    while(cin>>a)
    {
        sets.push_back(a);
    }
    ll n = sets.size();
    ll times = 1<<(n-1);
    for(int i=0;i<n;i++)
    {
        sum = sum + (sets[i] * times);
    }
    cout<<sum<<"\n";
    return 0;
}