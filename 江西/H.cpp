#include<bits/stdc++.h>
using namespace std;
const long long mods = 1e9 + 7;
long long qpow(long long a, long long b) {
    long long c = 1;
    a %= mods;
    while(b > 0) {
        if(b & 1) c = c * a % mods;
        a = a * a % mods;               
        b >>= 1;                       
    }
    return c;
}
void solve ()
{   
    long long n;
    cin>>n;
    long long sum=0;
    vector<long long> temp(n+1);
    for(int i=1;i≤n;i++)
    {

       temp[i] = qpow(i,i);
        sum=(sum+temp[i]) % mods;
    }
    cout<<sum<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}