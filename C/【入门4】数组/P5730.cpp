#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a;
    string s;
    cin>>s;

    string digits[10][5] = {
        {"XXX","X.X","X.X","X.X","XXX"}, // 0
        {"..X","..X","..X","..X","..X"}, // 1
        {"XXX","..X","XXX","X..","XXX"}, // 2
        {"XXX","..X","XXX","..X","XXX"}, // 3
        {"X.X","X.X","XXX","..X","..X"}, // 4
        {"XXX","X..","XXX","..X","XXX"}, // 5
        {"XXX","X..","XXX","X.X","XXX"}, // 6
        {"XXX","..X","..X","..X","..X"}, // 7
        {"XXX","X.X","XXX","X.X","XXX"}, // 8
        {"XXX","X.X","XXX","..X","XXX"}  // 9
    };
    for(int i=0;i<n;i++){s[i]=s[i]-'0';a.push_back(s[i]);}
        



       for(int j=0;j<5;j++){
            for(int k=0;k<n;k++){
                cout<<digits[a[k]][j];
                if(k!=n-1)cout<<".";
                    }

                    cout<<endl;}
       return 0;
}