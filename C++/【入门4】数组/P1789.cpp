#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[110][110]={0};
    bool light[110][110]={0};
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    for(int j=0;j<k;j++){
        int x,y;
        cin>>x>>y;
        a[x][y]=2;
    }
    int dark=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0){continue;}
            if(a[i][j]==2){
                for(int m=max(1,i-2);m<=min(n,i+2);m++){
                    for(int g=max(1,j-2);g<=min(n,j+2);g++){
                   light[m][g]=true;}                        }
                        continue;}
            if(a[i][j]==1){
    light[i][j] = true; 

    if(i-1 >= 1 && j-1 >= 1) light[i-1][j-1] = true;
    if(i-1 >= 1 && j+1 <= n) light[i-1][j+1] = true;
    if(i+1 <= n && j-1 >= 1) light[i+1][j-1] = true;
    if(i+1 <= n && j+1 <= n) light[i+1][j+1] = true;

    if(i-2 >= 1) light[i-2][j] = true;
    if(i-1 >= 1) light[i-1][j] = true;
    if(i+1 <= n) light[i+1][j] = true;
    if(i+2 <= n) light[i+2][j] = true;

    if(j-2 >= 1) light[i][j-2] = true;
    if(j-1 >= 1) light[i][j-1] = true;
    if(j+1 <= n) light[i][j+1] = true;
    if(j+2 <= n) light[i][j+2] = true;
}
}   }
    for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){if(a[i][j]==0 && !light[i][j] ){dark++;}}}
    cout<<dark<<endl;
    return 0;
}