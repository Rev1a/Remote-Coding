#include<bits/stdc++.h>
using namespace std;
int main (void) {
    char x;
    while(cin>>x){
        if(x>='a'&&x<='z'){
            cout<<(char)(x-32);

        }
        else cout<<x;

    }
    return 0;
}