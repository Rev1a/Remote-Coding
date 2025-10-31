#include<bits/stdc++.h>
using namespace std;
struct stu
{
    int id,score;
};
bool tmp(stu a, stu b)
{
    if(a.score!=b.score) return a.score > b.score;
    return a.id < b.id;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    stu s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].id>>s[i].score;
    }
    int count=floor(m*1.5);
    sort(s,s+n,tmp);
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i].score<s[count-1].score){break;}
        temp = i;
    }
    cout<<s[min(count-1,n-1)].score<<" "<<temp+1<<"\n";
    for(int i=0;i<=temp;i++)
    {
        if(s[i].score<s[count-1].score){break;}
        cout<<s[i].id<<" "<<s[i].score<<"\n";
    }
    return 0;
}