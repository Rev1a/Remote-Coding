//好像洛谷见过.JPG
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int arr[3];

    for( int i = 0 ; i < 3 ; i++ ){

        cin>>arr[i];
    }

    sort( arr,arr+3 );

    reverse( arr,arr+3 );

    if( arr[0] >= arr[1] + arr[2] ){

        cout<<"Not triangle"<<endl;

        return 0;

    }

    if( arr[0]*arr[0] == arr[1]*arr[1]+arr[2]*arr[2] ){

        cout<<"Right triangle"<<endl;

    }

    if( arr[0]*arr[0] < arr[1]*arr[1]+arr[2]*arr[2] ){

        cout<<"Acute triangle"<<endl;

    }

    if( arr[0]*arr[0] > arr[1]*arr[1]+arr[2]*arr[2] ){

        cout<<"Obtuse triangle"<<endl;

    }

    if( arr[1] == arr[2] || arr[1]== arr[0] || arr[0 ] ==  arr[2]){

        cout<<"Isosceles triangle"<<endl;

    }

    if( arr[0] == arr[1] && arr[1]==arr[2] ){

        cout<<"Equilateral triangle"<<endl;

    }

    return 0;
    
}