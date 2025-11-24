#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n;
    cin>>n;
    double p = 1 - n;
    double ans = 1.000000  - (p*p*p);
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}