#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n + 1);
    
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    ll cnt = 0;
    int j = 1;  
    ll sum = 0;
    

    for(int i = 1; i <= n; i++)
    {
        if(j < i)
        {
            j = i;
            sum = 0;
        }
        
        while(j <= n && sum + a[j] < x)
        {
            sum += a[j];
            j++;
        }
        
        cnt += (j - i);
        
        sum -= a[i];
    }
    
    cout << cnt << "\n";
    
    return 0;
}