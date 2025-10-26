#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;

    string sentence;

    cin>>word;

    cin.ignore();
    
    getline(cin,sentence);

    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    string temp;

    int count = 0;

    int pos = 0;

    for(int i = 0;i <= sentence.size()-1;i++){ 
    
        bool leftOK = (i == 0 || sentence[i-1] == ' ');

        bool rightOK = (i+word.size() == sentence.size() || sentence[i+word.size()] == ' ');

        if(sentence.substr(i,word.size()) == word  && leftOK && rightOK){

            count++;
    
        }

        if(count == 0)pos = i;
        
    }
    
    if(count == 0) cout<<-1<<endl;
    
    else cout<<count<<" "<<pos+1<<endl;
    
    return 0;

}