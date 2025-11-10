#include <bits/stdc++.h>
using namespace std;

          //                            U 上
          //                    L 左             R 右
          //                            D 下
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int turnleft  = 0;
    int turnright = 0;
    int straight  = 1; 
    for(int i=1;i<n;i++)                                                       
    {    

        if
        (
            (s[i]=='U' && s[i-1]=='D') ||
            (s[i]=='D' && s[i-1]=='U') ||
            (s[i]=='L' && s[i-1]=='R') ||
            (s[i]=='R' && s[i-1]=='L')
        ){cout<<"NO\n";return;} 



        if(s[i]==s[i-1])
        {
            straight++;
            if(straight >= 4)
            {
                cout << "NO\n";
                return;
            }
        }
        
        else if
        (
            (s[i]=='U' && s[i-1]=='L') ||     // L -> U -> R -> D   
            (s[i]=='R' && s[i-1]=='U') ||
            (s[i]=='D' && s[i-1]=='R') ||
            (s[i]=='L' && s[i-1]=='D') 
        )        
        {
            turnright++;
            straight=1;
            if(turnleft)turnleft=0;
            if(turnright == 4 )
        {
            cout<<"NO\n";
            return;
        }
        }
        else       
        {
            turnleft++;
            straight=1;
            if(turnright)turnright=0;
            if(turnleft == 4)
            {
            cout<<"NO\n";
            return;
            }
        }
    }

    cout<<"YES\n";

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}