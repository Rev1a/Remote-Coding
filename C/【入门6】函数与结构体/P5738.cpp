#include<iostream>
#include<vector>
#include<iomanip>
int main(){
    int n,m;
    std::cin>>n>>m;
    
    double sum;
    double avg;
    double temp=0;
    for(int i=0;i<n;i++){
        std::vector<double> vec(m);
        double mins=100;
        double maxs=0;
        sum=0;
        avg=0;
        for(int j=0;j<m;j++){
            std::cin>>vec[j];
            if(vec[j]>maxs){maxs=vec[j];}
            if(vec[j]<mins){mins=vec[j];}
            sum+=vec[j];
        }
        avg=(sum-mins-maxs)/(m-2);
        if(avg>temp){temp=avg;}
        
    }
    std::cout<<std::fixed<<std::setprecision(2)<<temp;
    return 0;
}