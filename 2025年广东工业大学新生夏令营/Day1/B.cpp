#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr double eps = 1e-8;
#define LOCAL_DEBUG // OJ提交注释掉这一行
//#define int long long //感觉不太对的时候取消注释
#ifdef LOCAL_DEBUG
#define dbg(...) cerr << "DEBUG: [" << #__VA_ARGS__ << "] = [", _print(__VA_ARGS__)
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    cerr << t;
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#else
#define dbg(...) ;
#endif
/**************************************************
* 检查你的输出格式
* 检查你的循环变量
* 检查你的边界条件
* 检查代码执行顺序
* 检查你他妈变量名到底写的对不对
* 检查你他妈变量名到底写的对不对
* 检查你他妈变量名到底写的对不对
***************************************************/
struct item
{
    double worth,weight;
    double avg;
};
bool tmp(item a,item b)
{
    return a.avg > b.avg;
}
void solve()
{
    int n,m,V;
    cin>>n>>m>>V;
    vector<item> a(n);
    vector<int>  b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].weight;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i].worth;
        a[i].avg=a[i].worth/a[i].weight;
    }
    sort(a.begin(),a.end(),tmp);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int temp_worth=0,temp_weight=0;
    int i=0,j=0;
    while(temp_worth < V)
    {   
        if(temp_worth + a[i].weight < V)
        {
            temp_worth+=a[i].worth;
            temp_weight+=a[i].weight;
            if(temp_weight+a[i].weight)
            {
                temp_worth+=b[j];
                temp_weight+=a[i].weight;
                j++;
            }
        }
        i++;
    }
    cout<<temp_worth<<"\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
