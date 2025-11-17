#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            string a = s.substr(0,i);
            string b = s.substr(i+1);
            while (a.size() > 1&& a.back() == '0') a.pop_back();
            while (b.size() > 1&& b.back() == '0') b.pop_back();
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            while (a.size() > 1 && a[0] == '0') a.erase(a.begin());
            while (b.size() > 1 && b.back() == '0') b.pop_back();
            cout<<a<<"."<<b<<"\n";
            return 0;
        }
        if(s[i]=='/')
        {
            string a = s.substr(0,i);
            string b = s.substr(i+1);
            while (a.size() > 1&& a.back() == '0') a.pop_back();
            while (b.size() > 1&& b.back() == '0') b.pop_back();
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            while (a.size() > 1 && a[0] == '0') a.erase(a.begin());
            while (b.size() > 1 && b.back() == '0') b.pop_back();
            cout<<a<<"/"<<b<<"\n";
            return 0;
        }
        if(s[i]=='%')
        {
            string a = s.substr(0,i);
            reverse(a.begin(),a.end());
            while (a.size() > 1 && a[0] == '0') a.erase(a.begin());
            cout<<a<<"%\n";
            return 0;
        }
    }
    while (s.size() > 1 && s.back() == '0') s.pop_back();
    reverse(s.begin(),s.end());
    cout<<s;
}