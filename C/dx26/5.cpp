#include<iostream>
#include<string>
class Employee{
    public:
    void setName(std::string str){
        name = str;
    }
    void setAge(int n){
        age = n;
    }
    void setDepartment(std::string str1){
        department = str1;
    }
    private:
    std::string name;
    int age;
    std::string department;
};
class Manager:public Employee{
    public:
    private:
    int level;
};
int main(){
    Employee employ;
    employ.setName("one");
    employ.setAge(18);
    employ.setDepartment("Union");
    Manager manager;
    manager.setName("two");
    manager.setAge(28);
    manager.setDepartment("Leadership");
}