#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[90]={0};
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                arr[i+j+k]++;
            }
        }
    }
    int max_point = 0 ;
    int cnt = 0 ;
    for(int i=0;i<=80;i++)
    {
        if(arr[i]>max_point)
        { 
            max_point=arr[i];
            cnt = i;
        }

    }
    cout<<cnt<<"\n";
    return 0;
}