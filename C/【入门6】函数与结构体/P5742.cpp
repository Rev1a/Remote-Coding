#include<bits/stdc++.h>
using namespace std;
class Stu{
    public:
    int id;
    int result_a;
    int result_b;
    void setId(int ids){
        id =ids;
    }
    void setResult_a(int a){
        result_a=a;
    }
    void setResult_b(int b){
        result_b=b;
    }
};
int main()
{
    int N;
    cin>>N;
    Stu stu[N];
    double sums[N];
    for(int i=0;i<N;i++)
    {
        int c,d,f;
        cin>>c>>d>>f;
        stu[i].setId(c);
        stu[i].setResult_a(d);
        stu[i].setResult_b(f);
        sums[i]=0.7*d+0.3*f;
        if(d+f>140 && sums[i]>=80){
            cout<<"Excellent"<<endl;
        }
        else{cout<<"Not excellent"<<endl;}
    }
    return 0;
}