#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int s;
    int i;
    cin>>str>>s;
    while(s)
    {
        for(i=0;str[i]<=str[i+1] &&i+1<str.size();)
        {
            i++;
        }
        if(i==str.size()-1)
        {
            str.erase(str.size()-1,1);
        }
        else
        {
            str.erase(i,1);
        }
        s--;
    }
    while(str[0]=='0' && str.size()>1)
    {
        str.erase(0,1);
    }
    cout<<str;
    return 0;
}