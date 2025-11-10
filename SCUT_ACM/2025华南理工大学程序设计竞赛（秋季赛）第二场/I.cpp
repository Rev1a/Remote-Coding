#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n+1);
    a[0] = 0;
    ll cnt = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
       
    }

    for(int i=1;i<=n;i++)
    {   
        if(a[i] >= x) continue;
        ll temp = 0;
        for(int j=i;j<=n;j++)
        {   
            temp +=  a[j];
            if(temp < x)
            {
                cnt++;
            }
            else break;
            
            /*if((a[j]-a[i])  < x  )
            {
                cnt++;
            }
            if(temp > x)
            {
                break;
            }*/

            //cout<<"cnt="<<cnt<<"  i="<<i<<"  j="<<j<<"\n";
        }
    }
    cout<<cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}