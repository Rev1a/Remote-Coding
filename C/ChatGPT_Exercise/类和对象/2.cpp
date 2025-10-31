#include<iostream>
class Book{
    private:
    std::string title;
    int price;
    public:
    void displayInfo()const{
        std::cout<<"你叫？ "<<title<<"你值？ "<<price<<std::endl;
    };
    void setPrice(double p){
        price = p;
    }
};/*
class Student{
    private:
    const std::string id;
    int score;
    public:
    Student(std::string i, int s) : id(i), score(s) {
     
    }
    void show(){
        std::cout<<"ID呢? "<<id<<"分数？ "<<score<<std::endl;
    }

};*/
class Person{
    private:
    std::string name;
    protected:
    int age;
    public:
    void showInfo(){
        std::cout<<" "<<name<<" "<<age<<std::endl;
    }

};
class Student:public Person{
    void getAge(){
        std::cout<<age<<"  ";
    }
    void getName(){
        //std::cout<<name<<"  ";//private的数据子类无法访问,so不行
    }
};
class Animal{
    private:
    std::string name;
    public:
    virtual void speak(){
        std::cout<<name<<"animal sound"<<std::endl;
    }
};
class Dog:public Animal{
    public:
   virtual void speak(){
        std::cout<<"Woof!"<<std::endl;
    }
};
class Base {

};
class Derived:public Base{
    
};