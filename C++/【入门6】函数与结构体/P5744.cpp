#include<iostream>
using namespace std;
class Practice{
    public:
    string name;
    int age;
    int score;
    void setName(string a)
    {
        name = a;
    }
    void setAge(int b)
    {
        age = b;
    }
    void setScore(int c)
    {
        score = c;
    }
    int Upgrade(int &s){
        double temp=s*1.2;
        if(temp>=600)
        {
            s=600;
            return 600;
        }
        else 
        {
            s = temp;
            return (int)temp;
        }
    } 
};
int main(){
    int n;
    cin>>n;
    Practice prac[n];
    for(int i=0;i<n;i++)
    {   
        string a;
        int b,c;
        cin>>a;
        cin>>b>>c;
        prac[i].setName(a);
        prac[i].setAge(b);
        prac[i].setScore(c);
    }
    for(int i=0;i<n;i++)
    {
        cout<<prac[i].name<<" "<<prac[i].age+1<<" "<<prac[i].Upgrade(prac[i].score)<<endl;
    }
    return 0;
}