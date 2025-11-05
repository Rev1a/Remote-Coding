#include<bits/stdc++.h>
using namespace std;
struct people
{
    string name;
    string b_pos;
    string a_pos;
    int a_pos_level;
    int attribute;
    int level;
    int input_id;
};
bool tmp1(people a,people b)
{
    if(a.attribute != b.attribute) return a.attribute > b.attribute;
    return a.input_id < b.input_id;
}
bool tmp2(people a,people b)
{
    if(a.a_pos_level != b.a_pos_level) return a.a_pos_level < b.a_pos_level;
    if(a.level != b.level) return a.level > b.level;
    return a.input_id < b.input_id;
}
bool tmp3(people a,people b)
{
    if(a.level != b.level) return a.level > b.level;
    return a.input_id < b.input_id;
}
void solve()
{
    int n;
    cin>>n;
    people a[3];
    people b[n-3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].name>>a[i].a_pos>>a[i].attribute>>a[i].level;
    }
    for(int i=0;i<n-3;i++)
    {
        cin>>b[i].name>>b[i].b_pos>>b[i].attribute>>b[i].level;
        b[i].input_id = i + 3;
    }
    sort(b,b+n-3,tmp1);
    for(int i=0;i<n-3;i++)
    {
        if(i+1<=2)
        {
            b[i].a_pos = "HuFa";
            b[i].a_pos_level = 1;
        }
        else if(i+1 >2 && i+1 <= 6)
        {
            b[i].a_pos = "ZhangLao";
            b[i].a_pos_level = 2;
        }
        else if(i+1 > 6 && i+1 <= 13)
        {
            b[i].a_pos = "TangZhu";
            b[i].a_pos_level = 3;
        }
        else if(i+1 > 13 && i+1 <= 38)
        {
            b[i].a_pos = "JingYing";
            b[i].a_pos_level = 4;
        }
        else
        {
            b[i].a_pos = "BangZhong";
           b[i].a_pos_level = 5;
        }
    }
    sort(b,b+n-3,tmp2);
    sort(a,a+3,tmp3);
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].a_pos<<" "<<a[i].level<<"\n";
    }
    for(int i=0;i<n-3;i++)
    {
        cout<<b[i].name<<" "<<b[i].a_pos<<" "<<b[i].level<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}