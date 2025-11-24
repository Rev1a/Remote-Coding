#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a[6];
    vector<int> nums;
    vector<string> s;
    string b[20]={"one","two","three","four","five",
                  "six","seven","eight","nine","ten",
                  "eleven","twelve","thirteen","fourteen","fifteen",
                  "sixteen","seventeen","eighteen","nineteen","twenty"};
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        for(int j=0;j<20;j++)
        {
            if(a[i]==b[j])
            {  
                nums.push_back(j+1);
            }
        }
        if (a[i] == "a") nums.push_back(1);
        else if (a[i] == "both") nums.push_back(2);
        else if (a[i] == "another") nums.push_back(1);
        else if (a[i] == "first") nums.push_back(1);
        else if (a[i] == "second") nums.push_back(2);
        else if (a[i] == "third") nums.push_back(3);
    }
    for(int i=0;i<nums.size();i++)
    {
        nums[i] = (nums[i] * nums[i]) % 100;
        char buf[5];
        sprintf(buf, "%02d", nums[i]);
        s.push_back(string(buf));
    }
    sort(s.begin(),s.end());
    string ans = "";
    for(auto &t:s)ans+=t;
    int p=0;
    while(p<ans.size() && ans[p]=='0')p++;
    if(p==ans.size())cout<<"0\n";
    else cout<<ans.substr(p);
    return 0;
}