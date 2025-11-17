#include<bits/stdc++.h>
using namespace std;
int a[40][40],x=1,y=0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    y = n/2 + 1;
    for(int i=1;i<=n*n;i++)
    {
        a[x][y] = i;
        if((x==1 && y==n) || a[x-1][y+1])
        {
            x++;
        }
        else if(x==1)
        {
            x = n;
            y++;
        }
        else if (y == n) {
			x--;
			y = 1;
		} else {
			x--;
			y++;
		}
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}