#include<bits/stdc++.h>
using namespace std;
int ans=0;
int n=0;
int arr[100]={0};
bool a[20]={0};
bool b[40]={0};
bool c[40]={0};
void dfs(int x)
{
    if(x > n)
    {
        ans++;
        if(ans <= 3)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
    for(int i=1;i<=n;i++)
    {
        if( !a[i] && !b[x+i] && !c[x-i+n])
        {   
            arr[x] = i;
            a[i]=true;
            b[x+i]=true;    //标记为已走
            c[x-i+n]=true;
            dfs(x+1);      //寻找你妈ing
            a[i]=false;
            b[x+i]=false;    //取消标记
            c[x-i+n]=false;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    dfs(1);
    cout<<ans<<"\n";
    return 0;
}