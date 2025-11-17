#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a;
    int n;
    cin>>n>>a;
    int nums = n;
    char temp = a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==temp)
        {
            nums--;
        }
    }
    cout<<nums<<"\n";
    return;
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
