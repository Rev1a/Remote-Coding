#include<bits/stdc++.h>
using namespace std;
long long sum = 0;
void solve(vector<int>& a)
{
    int temp[2]={0};
    sort(a.rbegin(),a.rend());
    for(int i : a)
    {
        if(temp[0] <= temp[1])
        {
            temp[0] += i;
        }
        else
        {
            temp[1] += i;
        }
    }
    sum += max(temp[1],temp[0]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        vector<int> A(arr[i]);
        for(int j=0;j<arr[i];j++)
        {
            cin>>A[j];
          
        }  
        solve(A);
    }
    cout<<sum<<"\n";
    return 0;
}