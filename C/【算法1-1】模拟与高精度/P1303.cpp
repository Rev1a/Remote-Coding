#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1500]={0},b[1500]={0},c[10000]={0},la,lb,lc=0;
    string m,n;
    cin>>m>>n;
    for(int i=m.size();i>0;i--)
    {
        a[m.size()-i]=m[i-1]-'0';
    }
    for(int i=n.size();i>0;i--)
    {
        b[n.size()-i]=n[i-1]-'0';
    }
    la = m.size(), lb = n.size();
    int len = max(la, lb);
    for (int j = 0; j < len; j++) 
    {
    c[j] += a[j] + b[j];
    c[j+1] += c[j] / 10;
    c[j] %= 10;
    }

    lc=max(m.size(),n.size());
    if(c[lc])
    {
        lc+=1;
    }
    for(int i=lc-1;i>=0;i--){
        cout<<c[i];
    }
}