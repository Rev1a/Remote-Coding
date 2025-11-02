#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double cns;
    cin>>cns;
    double a=0;
    double del=1e-6;
    for(int i=0;i<1000;i++)
    {
        double b = sqrt(cns+2*a);
        if(fabs(b-a) < del)
        {
            cout<< fixed << setprecision(6) <<b<<"\n";
            return;
        }
        a = b;
    }
    cout << fixed << setprecision(6) << a;
} 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T=1;
    //cin>>T;

    while(T--)
    {
        solve();
    }

    return 0;
}