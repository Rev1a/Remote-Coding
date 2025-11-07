#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   bool find = false;
   for(int i=n-1;i>0;i--)
   {
        for(int j=i-1;j>=0;j--)
        {
            if((a[i]%a[j])%2 ==0)
            {
                cout<<a[j]<<" "<<a[i]<<'\n';
                find = true;
                break;
            }
        }
        if(find)break;   
   }
   if( !find )cout<<"-1\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}