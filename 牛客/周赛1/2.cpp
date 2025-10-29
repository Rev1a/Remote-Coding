#include<bits/stdc++.h>
using namespace std;
vector<int> Parts;
bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){   
        if(n%i==0) return 0;
    }                                 //合数因子判断
    return 1;
}
void isPart(int x)
{
    if(x==1){Parts.push_back(1);}
    for (int i=1; i*i<=x; i++) {
    if (x % i == 0) {
        Parts.push_back(i);
        if (i != x/i) Parts.push_back(x/i);
    }
}

}
int main()
{   
    int cnt=0;
    int c[10002]={0};
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;                    //  n是查询范围   m是几合因子数
    cin>>n>>m;
    for(int k=1;k<=n;k++)
    {
        for(int f=1;f<=k;f++)
        {
            if(Parts.size()==m)
            {
                break;
            }
            isPart(k);        //找因子
            
        }
        for(int l=0;l<Parts.size();l++)
        {
            if(isPrime(Parts[l])==false)
            {
                cnt++;                    
            }
        }
        c[k-1]=cnt;
        cnt=0;
        vector<int>().swap(Parts);
    }
    for(int w=0;w<m;w++)
    {
        cout<<c[w]<<"\n";
    }
    return 0;
}