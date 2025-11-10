#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int temp = 1;
    int cnt  = 1;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int x    = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i] == a[i-1])
        {
            cnt++;
        }
        else
        { 
            if(cnt > temp)
            {
                x = a[i-1];
                temp = cnt;
            }
            cnt = 1;
        }
    }
    if( cnt > temp)
    {
        x = a[n-1];
    }
    cout<<x<<"\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}