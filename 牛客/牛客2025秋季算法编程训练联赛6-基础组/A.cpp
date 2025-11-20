#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[4];
    cin>>a[1]>>a[2]>>a[3];
    if(a[1] + a[2] <= a[3] || a[2] + a[3] <= a[1] || a[1] + a[3] <= a[2]){
        cout << "wtnl";
        return 0;
    }
    else
    {   
        cout<<"Yes\n";
        double A = a[1];
        double B = a[2];
        double C = a[3];
        double b[4];
        b[1] = (B-A+C)/2.0;
        b[2] = (A-B+C)/2.0;
        b[3] = (A+B-C)/2.0;
        sort(b+1,b+4);
        for(int i=1;i<=3;i++)
            cout<<fixed<<setprecision(2)<<b[i]<<" ";
    }
    return 0;
}