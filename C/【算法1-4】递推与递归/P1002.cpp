#include<iostream>
using namespace std;
int main(){
    int pd[21][21];
    bool unsafe[21][21]={false};
    int bx,by,hx,hy;
    cin>>bx>>by>>hx>>hy;
    int dx[8] = {2,2,-2,-2,1,1,-1,-1}; 
    int dy[8] = {1,-1,1,-1,2,-2,2,-2};
    pd[0][0]=1;
    unsafe[hx][hy]=1;
    for(int i=0;i<8;i++){ 
        int nx = hx + dx[i]; 
        int ny = hy + dy[i]; 
        if(nx>=0 && nx<=20 && ny>=0 && ny<=20) {
            unsafe[nx][ny] = true;
        }
    }
    for(int i=1;i<=bx;i++){
    pd[i][1] = unsafe[i][1] ? pd[i-1][1] : 0;
}
    for(int i=1;i<=by;i++){
    pd[1][i] = unsafe[1][i] ? pd[1][i-1] : 0;    
}
    for(int i=2;i<=bx;i++){ 
        for(int j=2;j<=by;j++){ 
            if(unsafe[i][j]){ 
                pd[i][j]=0; continue; 
            } 
            pd[i][j]=pd[i-1][j]+pd[i][j-1]; 
        } 
    } 
    cout<<pd[bx][by];
    return 0;
}