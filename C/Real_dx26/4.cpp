#include<iostream>
using namespace std;

int main(){

    string str;

    getline(cin,str);

    for(int i=0;i<str.size();i++){

        if(i==0){

            for(int k=1;k<50;k++){

                if(k>str.size()){break;}

                if(k%2 == 0){str[i+k-1]=str[i+k-1]-'a'+'A';}

                if(str[i+k]==' '){break;}

            }

        }
        if(str[i]==' '){

            for(int m=1;m<50;m++){

                if( m+i>str.size() ){break;}

                if( m%2 == 0 ){str[i+m-1] = str[i+m-1]-'a'+'A';}

                if( str[m+i] == ' ' ){break;}

            }
        }

    }

    for( int n = 0; n < str.size() ; n++ ){

        cout<<str[n];

    }

    return 0;
}

//写的有点乱，见谅