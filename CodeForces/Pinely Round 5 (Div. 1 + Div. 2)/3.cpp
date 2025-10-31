#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        ll nums[n];
        int cnt=0;
        int rnd=-1;int award=0;
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        sort(nums,nums+n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]<x)continue;
            else{cnt = i;break;}
        }
        int p=0;
        int q=cnt;
        int tempsum=0;
        int w=n;
        vector<ll> aws;
        while(w--)
        {       
            if(nums[p]+nums[q]+tempsum<x)
            {
                tempsum+=nums[p];
                p++;
                aws.push_back(nums[p]);
            }
            else
            {   
                if(nums[q]+tempsum>x)
                {
                tempsum=(tempsum+nums[q])%x;
                award+=nums[q];
                q--;
                aws.push_back(nums[q]);
                }
                else
                {
                    tempsum=(tempsum+nums[q]+nums[p])%x;
                award+=nums[q];
                q--;
                p--;
                aws.push_back(nums[p]);
                aws.push_back(nums[q]);
                }
            }
        }
        for(int i=cnt;i<n;i++)award+=nums[i];
        cout<<award<<"\n";
        for(int i=0;i<aws.size();i++)cout<<aws[i]<<" ";
        for(int i=cnt;i<n;i++)cout<<nums[i]<<" ";
        cout<<"\n";
    }
}