#include<bits/stdc++.h>
using namespace std;
long double dis(int x1,int y1,int x2,int y2)
{
    long double temp = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return temp;
}
struct pos
{
    int x,y;
}p[20];
bool vis[20];
double d[20];
double pos = INT_MAX;
int n; 
int cur_x,cur_y;
void dfs(int dep)
{
    if(dep > n)
    {   
        double sum = 0;
        for(int i=0;i<n;i++)
        {
            sum +=d[i];
        }
        pos = min(pos,sum);
    }
    for(int i=0;i<n;i++)
    {
        cur_x = p[i].x;
        cur_y = p[i].y;
        for(int j=0;j<n;j++)
        {   
            vis[j]=true;
            d[j] = dis(cur_x,cur_y,p[j].x,p[j].y);
            dfs(dep+1);
            vis[j]=false;
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>p[i].x>>p[i].y;
    }
    dfs(1);
    cout<<pos<<"\n";
    return 0;
}