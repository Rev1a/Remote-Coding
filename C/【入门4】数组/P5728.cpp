#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pairs=0;
    int arr[1005][3]={ };
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }

    }
    int sum[1005];
    for(int k=0;k<n;k++){
        sum[k]=arr[k][0]+arr[k][1]+arr[k][2];
    }
    for(int m=0;m<n;m++){
        for(int v=m+1;v<n;v++){
            if( abs(sum[m]-sum[v]) <= 10 && 
                abs(arr[m][0]-arr[v][0])<=5 &&
                abs(arr[m][1]-arr[v][1])<=5 &&
                abs(arr[m][2]-arr[v][2])<=5 ){pairs+=1;}
        }
    }
    cout<<pairs<<endl;
    return 0;
    }