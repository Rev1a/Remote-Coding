#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{    

     int n,m;
     cin>>n>>m;


     vector<int> sword(n);
     multiset<int> attack;
     vector<pair<long long,long long>> monsters(m);


     for(int i=0;i<n;i++){cin>>sword[i];}
     for (int i = 0; i < m; i++) cin >> monsters[i].first;     //生命
     for (int i = 0; i < m; i++) cin >> monsters[i].second;    //奖励


     sort
     (monsters.begin(), monsters.end(), [](auto &p1, auto &p2) 
     {
        if (p1.first != p2.first) return p1.first < p2.first;
        return p1.second > p2.second;
     }
     );

     for(auto x : sword)attack.insert(x);

     int ans = 0;

     for(auto[B,C] : monsters)
     {
          auto it = attack.lower_bound(B);
          if(it == attack.end()) continue;
          long long x = *it;
          attack.erase(it);
          if( C > 0 )
          {
               attack.insert(max(x,C));
          }
          ans++;
     }

     cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}