#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    double score;
    public:
    void setName(const string &n){
        name = n;
    }
    void setScore(const int &m){
        score = m;
    }
    double getScore()const{return score;}
};
double calculateAverageScore()