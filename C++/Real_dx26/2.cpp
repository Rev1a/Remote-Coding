#include<iostream>

using namespace std;

int main(){

    string str;

    int n;

    cin>>n>>str;

    for(int i=0;i<str.size();i++){

       int temp=str[i]+n;  

       if(temp>'z'){temp=temp-'z'+'a'-1;}  

       cout<<char(temp);

    }

    return 0;
}
