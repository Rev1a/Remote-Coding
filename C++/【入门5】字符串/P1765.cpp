#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int sums=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){sums+=1;}
        if(s[i]=='b'){sums+=2;}
        if(s[i]=='c'){sums+=3;}
        if(s[i]=='d'){sums+=1;}
        if(s[i]=='e'){sums+=2;}
        if(s[i]=='f'){sums+=3;}
        if(s[i]=='g'){sums+=1;}
        if(s[i]=='h'){sums+=2;}
        if(s[i]=='i'){sums+=3;}
        if(s[i]=='j'){sums+=1;}
        if(s[i]=='k'){sums+=2;}
        if(s[i]=='l'){sums+=3;}
        if(s[i]=='m'){sums+=1;}
        if(s[i]=='n'){sums+=2;}
        if(s[i]=='o'){sums+=3;}
        if(s[i]=='p'){sums+=1;}
        if(s[i]=='q'){sums+=2;}
        if(s[i]=='r'){sums+=3;}
        if(s[i]=='s'){sums+=4;}
        if(s[i]=='t'){sums+=1;}
        if(s[i]=='u'){sums+=2;}
        if(s[i]=='v'){sums+=3;}
        if(s[i]=='w'){sums+=1;}
        if(s[i]=='x'){sums+=2;}
        if(s[i]=='y'){sums+=3;}
        if(s[i]=='z'){sums+=4;}
        if(s[i]==' '){sums+=1;}
    }
    cout<<sums;
    return 0;
}