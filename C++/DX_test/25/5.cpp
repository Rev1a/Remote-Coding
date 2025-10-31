#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
class People{
    private:
    string name;
    int age;
    string work;
    public:
    void setName(const string &n){
        name = n;
    }
    void setAge(int &n){
        age = n;
    }
    void setWork(const string &n){
        work = n;
    }
};
class Student : public People{
    private:
    int grade;
};