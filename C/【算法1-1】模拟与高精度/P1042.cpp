#include<bits/stdc++.h>
using namespace std;
void calculate(string as,int limit)
{
    int w=0,l=0;
    for(char c:as)
    {
        if(c=='W'){w++;}
        else if(c=='L'){l++;}
        if((w>=limit || l>= limit) && abs(w-l)>=2)
        {
            cout<<w<<":"<<l<<"\n";
            w=0;
            l=0;
        }
    }
    cout<<w<<":"<<l<<"\n";
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    char a;
    while(cin>>a)
    {
        if(a=='W' || a=='L')
        {
            str=str+a;
            continue;
        }
        else if(a=='E')
        {
            break;
        }
    }
    calculate(str,11);
    cout<<"\n";
    calculate(str,21);
    return 0;

}
