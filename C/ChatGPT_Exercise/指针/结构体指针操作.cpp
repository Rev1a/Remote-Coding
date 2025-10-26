#include<iostream>
using namespace std;
struct Student{
    string name;
    int score;
};
int main(){
    int n;
    cin>>n;
    Student stu[n];
    Student *p=stu;
    for(int i=0;i<n;i++){
        cout<<stu[i].score;
    }
    return 0;
}