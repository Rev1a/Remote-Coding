#include<bits/stdc++.h>
using namespace std;
string origin,target;
vector<pair<string,string>> rules;
queue<pair<string,int>> q;
set<string> vis;
void bfs()
{
    q.push({origin, 0});
    vis.insert(origin);
    while(!q.empty())
    {
        auto[s,step] = q.front();
        q.pop();
        if(s==target)
        {
            cout<<step;
            return ;
        }
        if(step >= 10)
        {
            continue;
        }
        for(auto &[x,y] : rules)
        {
            for (size_t pos = s.find(x); pos != string::npos; pos = s.find(x, pos + 1))
            {
                string t = s;
                t.replace(pos,x.size(),y);
                if(!vis.count(t))
                {
                    vis.insert(t);
                    q.push({t,step+1});
                }
            }
        }
    }
    cout<<"NO ANSWER!";
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>origin>>target;
    
    string b,c;
    while(cin>>b>>c)
    {
        rules.push_back(make_pair(b,c));
    }
    bfs();
    return 0;
}