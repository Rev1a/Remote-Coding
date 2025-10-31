#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    int arr[3]={0};
    while(getline(cin,line))
    {
        for(char ch : line) {
            if(ch == '0') {arr[0]++;}
            else if(ch == '1') {arr[1]++;}
            
        }
    }
    return 0;
}