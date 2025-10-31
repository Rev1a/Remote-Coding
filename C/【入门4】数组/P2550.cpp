#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int same=0;
    cin>>n;
    int fir=0,sec=0,thi=0,foru=0,fiv=0,six=0,sev=0;
    int award[7];
    for(int i=0;i<7;i++){
        cin>>award[i];
    }
    int nums[7];
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cin>>nums[j];}
        for(int k=0;k<7;k++){
            for(int m=0;m<7;m++){
                if(award[k]==nums[m]){same+=1;}
            }
        }
        if(same==7){fir++;}
        else if(same==6){sec++;}
        else if(same==5){thi++;}
        else if(same==4){foru++;}
        else if(same==3){fiv++;}
        else if(same==2){six++;}
        else if(same==1){sev++;}
        same=0;
    }
    cout<<fir<<" "<<sec<<" "<<thi<<" "<<foru<<" "<<fiv<<" "<<six<<" "<<sev;
    return 0;
}