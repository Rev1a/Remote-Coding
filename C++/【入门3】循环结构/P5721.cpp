#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i=1,k=1;
    int j=1;
    cin>>n;
    while(i<=n){
        for(j;j<=n;j++){
            cout<<setw(2)<<setfill('0')<<k;
            k++;
        }
        i++;
        cout<<endl;
        j=i;
    }
    return 0;






}