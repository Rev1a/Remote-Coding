//?过不了测
// ？？？
#include<bits/stdc++.h>
using namespace std;
void quick_sort(vector<int>& a,int L,int R,int &sum)
{   
    
    int x=L,y=R,mid=a[(x+y)/2];
    while(x<=y)
    {
        while(a[x]<mid)x++;
        while(a[y]>mid)y--;
        if(x<=y)
        {
            swap(a[x],a[y]);
            x++;
            y--;
        }
    }
    sum++;
    if(y>L)quick_sort(a,L,y,sum);
    if(x<R)quick_sort(a,x,R,sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
   
    while(T--)
    {   
        int sum=0;
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        quick_sort(a,0,n-1,sum);
        cout<<sum<<"\n";
    }
    return 0;
}
