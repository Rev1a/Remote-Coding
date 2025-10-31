#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            for(int j=i-1;j>=0;j--){
                cout<<s[j];
            }
            cout<<".";
            for(int j=s.size()-1;j>i;j--){
                cout<<s[j];
                
            }
            return 0;
        }
        else if(s[i]=='/'){
             for(int j=i-1;j>=0;j--){
                cout<<s[j];
            }
            cout<<"/";
            for(int j=s.size()-1;j>i;j--){
                cout<<s[j];
            }
                return 0;
        }
        else if(s[i]=='%'){
             for(int j=i-1;j>=0;j--){
                cout<<s[j];
            }
            cout<<"%";
                return 0;
        }
        }
      reverse(s.begin(),s.end());
      size_t start = s.find_first_not_of('0');
      if(start != string::npos) {
          s = s.substr(start);
      }else{
        cout<<"0";
      }
      cout<<s;
      return 0;  
    }