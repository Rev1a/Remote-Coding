#include<bits/stdc++.h>
using namespace std;
int q;
vector<int> path;
void dfs(int r,int l)
{
    if(r==0)
    {
        for(int i=0;i<path.size();i++)
        {
            if(i) cout<<"+";
            cout<<path[i];
        }
        cout<<'\n';
        return;
    }
    for(int i=l;i<=r;i++)
    {   
        if(i==q)continue;
        path.push_back(i);
        dfs(r-i,i);
        path.pop_back();
    }
}
int main()
{
    cin>>q;
    //cerr << "DEBUG READ q=" << q << endl;
    dfs(q,1);
    return 0;
}