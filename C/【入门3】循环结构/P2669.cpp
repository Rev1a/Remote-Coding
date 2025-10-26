#include <iostream>	
using namespace std;
int n,q,c,s;
int main(){cin>>n;
    c=q=1;
    for(int i=1;i<=n;i++){s+=c;q--;if(q==0){c++;q=c;}}
    cout<<s;	
    return 0;}