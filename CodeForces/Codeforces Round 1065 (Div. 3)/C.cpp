#include <bits/stdc++.h>
using namespace std;
#define ll long long
int dp[105]={0};
void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int diff_count = 0;
    int last_diff_index = -1; 

    for (int i = 0; i < n; i++) 
    {
        if (a[i] != b[i]) 
        {
            diff_count++;
            last_diff_index = i;
        }
    }

    if (diff_count % 2 == 0) 
    {
        cout << "Tie" << endl;
        return;
    }

    if ((last_diff_index + 1) % 2 != 0) 
    {
        cout << "Ajisai" << endl;
    } 
    else 
    {
        cout << "Mai" << endl;
    }
}
int main() {
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
