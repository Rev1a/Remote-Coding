#include<iostream>
#include<string>

class Student{
    private:
    std::string name;
    int score;
    public:
    void setName(const std::string &a){
        name = a ;
    }
    void setScore(int b){
        score = b;
    }
   std::string getName()const{
        return  name;
    }
    int getScore()const{
        return score;
    }

};
double calculateAverageScore(Student *stu[],int length){
    double sum=0;
    for(int i=0;i<length;i++){
        sum+=stu[i]->getScore();
    }
    return sum/length;

};
int main(){
    Student *stu[3];
   
    for(int i=0;i<3;i++){ 
        stu[i] = new Student;
        std::string str;
        int n;
        std::cin>>str>>n;
        stu[i]->setName(str);
        stu[i]->setScore(n);
    }
    double avg=calculateAverageScore(stu,3);
    for(int i=0;i<3;i++){
        delete stu[i];
        stu[i] = nullptr;
    }
    std::cout<<avg;
    return 0;
}