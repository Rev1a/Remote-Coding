#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long a, b, n;
    cin >> a >> b >> n;    //  a 屏幕   b 标准长度  n  标签数量
    long long ans = 0;
    long double len = b;
    while (n > 0) 
    {
        if (n * len <= a) 
        {
            ans++;
            break;
        } 
        else 
        {
            len = a/na/(n-1);
        }
    }
    cout<<ans<<"\n";
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}