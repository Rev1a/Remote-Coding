#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
cin >> n;
char lastOp;
for (int i = 0; i < n; i++) {
    string first;
    cin >> first;
    int x, y;
    char op;

    if (first == "a" || first == "b" || first == "c") {
        if (first == "a") op = '+';
        if (first == "b") op = '-';
        if (first == "c") op = '*';
        cin >> x >> y;
        lastOp = op;
    } else {
        if(first != "a" && first != "b" && first != "c"  ){  x = stoi(first);}
        cin >> y;
        op = lastOp; 
    }
    int sum = 0;
    if(op == '+') {
        sum = x + y;
    } else if(op == '-') {
        sum = x - y;
    } else if(op == '*') {
        sum = x * y;
    }
    string result = to_string(x)+lastOp+to_string(y)+"="+to_string(sum);
    cout << result << endl;
    cout<<result.size()<<endl;
}
    return 0;
}