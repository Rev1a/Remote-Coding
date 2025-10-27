#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[10][10]={0};
    int ars[10][10]={0};
    int arj[10][10]={0};
    int a,b,c;
    while(cin>>a>>b>>c)
    {   
        if (a == 0 && b == 0 && c == 0) break;
        arr[a][b]=c;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   
            int temp=max(arr[i-1][j],arr[i][j-1]);
            ars[i][j]=temp+arr[i][j];
            cout<<ars[i][j]<<"\n";
        }
    }

    cout<<ars[n][n];
    return 0;
}