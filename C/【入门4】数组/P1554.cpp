#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int num0=0;
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int num5=0;
    int num6=0;
    int num7=0;
    int num8=0;
    int num9=0;
    vector<string> vec;
    for(int m=a;m<=b;m++){
        int j=a;
        string str=to_string(j);
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){num0+=1;}
            if(str[i]=='1'){num1+=1;}
            if(str[i]=='2'){num2+=1;}
            if(str[i]=='3'){num3+=1;}
            if(str[i]=='4'){num4+=1;}
            if(str[i]=='5'){num5+=1;}
            if(str[i]=='6'){num6+=1;}
            if(str[i]=='7'){num7+=1;}
            if(str[i]=='8'){num8+=1;}
            if(str[i]=='9'){num9+=1;}
        }
    }
    cout<<num0
        <<" "<<num1
        <<" "<<num2
        <<" "<<num3
        <<" "<<num4
        <<" "<<num5
        <<" "<<num6
        <<" "<<num7
        <<" "<<num8
        <<" "<<num9<<endl;
        return 0;
}