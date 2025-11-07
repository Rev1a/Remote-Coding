#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct monsters
{
     ll hp,award;
};
void solve()
{
     int n,m;
     cin>>n>>m;
     vector<ll> swords(n);
     vector<monsters> mons(m);
     for (int i = 0; i < n; i++) cin >> swords[i];
     for (int i = 0; i < m; i++) cin >> mons[i].hp;
     for (int i = 0; i < m; i++) cin >> mons[i].award;

     sort(swords.begin(),swords.end());
     sort(mons.begin(), mons.end(), [](const monsters &a, const monsters &b){
        return a.hp < b.hp; 
     });

     multiset<ll> attack(swords.begin(), swords.end()); 
     priority_queue<ll> pq;
     int idx = 0, ans = 0;

     while(!attack.empty())
     {
     ll x = *attack.begin(); 
     attack.erase(attack.begin());

   
     while(idx < m && mons[idx].hp <= x)
     {
          pq.push(mons[idx].award);
          idx++;
     }

     if(pq.empty()) continue; 

     ll reward = pq.top(); pq.pop();
     ans++;

     if(reward > 0) attack.insert(max(x, reward));
     }

     cout<<ans<<"\n";
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
}