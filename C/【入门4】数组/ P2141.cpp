#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;

    for (int k = 0; k < n; k++) {      
        bool found = false;              
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && i != k && j != k && a[i] + a[j] == a[k]) {
                    ans++;
                    found = true;
                    break; 
                }
            }
            if (found) break;
        }
    }

    cout << ans << endl;
    return 0;
}
