#include<bits/stdc++.h>
using namespace std;
struct Stu
{
    int chi,mat,eng;
    int sum;
    int id;
};
bool tmp(Stu a,Stu b)
{
    if(a.sum!=b.sum)return a.sum>b.sum;
    if(a.chi!=b.chi)return a.chi > b.chi;
    return a.id  < b.id;
}
Stu stu[300];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].chi>>stu[i].mat>>stu[i].eng;
        stu[i].id=i+1;
        stu[i].sum=stu[i].chi+stu[i].mat+stu[i].eng;
    }
    sort(stu,stu+n,tmp);
    for(int i=0;i<5;i++)
    {
        cout<<stu[i].id<<" "<<stu[i].sum<<"\n";
    }
    return 0;
}