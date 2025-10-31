#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}