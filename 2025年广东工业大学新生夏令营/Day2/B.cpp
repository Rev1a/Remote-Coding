#include<bits/stdc++.h>
using namespace std;
struct DSU {
    vector<int> fa;
    DSU(int n) { fa.resize(n+1); iota(fa.begin(), fa.end(), 0); }
    int find(int x) { return fa[x] == x ? x : fa[x] = find(fa[x]); }
    void merge(int x, int y) { fa[find(x)] = find(y); }
};
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int l[10];
    DSU dsu(500000);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        if(a[i]==a[n-1-i])
        {
            continue;
        }
        else
        {
            
        }
    }
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}