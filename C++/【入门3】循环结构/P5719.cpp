#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a=0,b=0;
    int n,k;
    long long num_a=0,num_b=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i%k==0)
        {a+=i;num_a++;

        }
        else{b+=i;num_b++;}

    }
    double avg_a=(double)a/num_a;
    double avg_b=(double)b/num_b;
    cout<<setprecision(1)<<fixed<<avg_a<<" "<<avg_b<<endl;
    return 0;
}