/**************************************************
 * Author:  可以输入你的昵称
 * Date:    可以输入当前时间（vscode可以代码片段自动生成时间，可以ai帮忙配置）
 * 生きることは素晴らしいだって
 * みんななかよくプレイしましょう!
 ***************************************************/
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

void solve()
{
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}






/*
long long qpow(long long a, long long b, long long mod) {
    long long c = 1;
    a %= mod;
    while(b > 0) {
        if(b & 1) c = c * a % mod;
        a = a * a % mod;               
        b >>= 1;                       
    }
    return c;
}

神秘快速幂   & 1 判断是否最低位是1
        >> 是向左移一位 




*/