#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    const long long MOD = 1e9+7;
    string s;
    cin >> s;
    long long cntA = 0, cntAC = 0, cntACM = 0;

    for(char c : s) {
        if(c == 'A') {
            cntA = (cntA + 1) % MOD;
        } else if(c == 'C') {
            cntAC = (cntAC + cntA) % MOD;
        } else if(c == 'M') {
            cntACM = (cntACM + cntAC) % MOD;
        }
    }
    cout << cntACM << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}