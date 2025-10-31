#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin >> n; 
    long long sum = 0;
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end - start;

    cout << "Sum = " << sum << "\n";
    cerr << "Time used = " << diff.count() << " s\n";

    return 0;
}
