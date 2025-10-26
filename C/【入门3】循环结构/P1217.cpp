#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){   
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    auto a=0,b=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i%2==0){continue;}
        int w=i,s=0;
        while (w!=0)
        {
            s = s*10 +w%10;
            w/=10;
        }
        if(s!=i)
        {
            continue;
        }
        if(isPrime(i))
        {
            cout<<i<<"\n";
        }
        else{continue;}
        
    }
    return 0;
}