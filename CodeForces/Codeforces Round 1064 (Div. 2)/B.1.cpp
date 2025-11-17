#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
    
    long long ans = 1;
    long long len = b;
    
    while (n * len > a) {
        // 当前 n 个标签长度为 len 时，无法一次全部关闭
        // 一次最多关闭 a/len 个
        long long m = a / len;
        n -= m;
        ans++;
        
        if (n == 0) break;
        
        long long new_len = min(b, a / n);
        
        // 如果新长度能整除旧长度，无需移动（已在 ans++ 中计算过）
        // 如果不能整除，需要额外移动一次
        if (new_len % len != 0) {
            ans++;
        }
        
        len = new_len;
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}