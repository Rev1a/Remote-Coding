#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[22][22];
    int row,col=1;
    for(row=1;row<=n;row++){
        a[row][1]=1;
        a[row][row]=1;
        for(int j=2;j<row;j++){
            a[row][j]=a[row-1][j-1]+a[row-1][j];
        }

        }
        int column=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<a[i][j]<<" ";
               
            }
            cout<<endl;
        }
        return 0;
}