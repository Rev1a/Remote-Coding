/*
#include<iostream>
using ll=long long;
int main(){
    int x=9;
    double y=1.14;
    auto z=x+y;
    std::cout<<"x="<<x<<std::endl<<"type of x="<<typeid(x).name()<<std::endl;
    std:cout<<"y="<<x<<std::endl<<"type of y="<<typeid(y).name()<<std::endl;
    std:cout<<"z="<<x<<std::endl<<"type of z="<<typeid(z).name()<<std::endl;
    ll a=114514;
    std::cout<<"a="<<a;
    return 0;
}
    */
   /*
#include<iostream>
int main(){
    int n;
    std::cin>>n;
    if(n<=1){std::cout<<"invalid";}
    else{
        for(int i=1;i<=n;i+=2){
            std::cout<<i<<" ";
        }
    }
    return 0;
}
    */
   /*
#include<iostream>
int main(){
    double x=114.514;
    int n=x;
    std::cout<<"隐式转换结果："<<static_cast<int>(x)<<std::endl;
    std::cout<<"显式转换结果："<<n;
}
    */
   /*
#include<iostream>
int main(){
    int a=1,b=2;
    std::cout<<"a+b="<<a+b<<std::endl;
    std::cout<<"a-b="<<a-b<<std::endl;
    std::cout<<"a*b="<<a*b<<std::endl;
    std::cout<<"a/b="<<a/b<<std::endl;
    std::cout<<"&&"<<"表示两边同时需要满足条件"<<std::endl;
    std::cout<<"||"<<"表示两边满足其中之一条件"<<std::endl;
    std::cout<<"a==b"<<a==b<<std::endl;
    std::cout<<"a!=b"<<a!=b<<std::endl;
    std::cout<<"++a"<<++a<<std::endl;
    std::cout<<"b--"<<b--<<std::endl;
    return 0;
}
    */
   /*
#include<iostream>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    int *p=arr;
    int &ref=arr[2];
    ref=99;
    for(int i=0;i<5;i++){
        std::cout<<*(p+i)<<" ";
    }
    std::cout<<std::endl;
}
    */
   /*
#include<iostream>
int swapValues(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a,b;
}
inline int add(int &n,int &m){
    return n+m;
}
int main(){
    int n,m;
    std::cin>>n>>m;
    std::cout<<"交换前:a="<<n<<"b="<<m<<std::endl;
    swapValues(n,m);
    std::cout<<"交换后:a="<<n<<"b="<<m<<std::endl;
    add(n,m);
    std::cout<<"add("<<n<<","<<m<<")="<<add(n,m)<<std::endl;
}
    */


/*
#include<iostream>
class Animal{
    virtual void speak()=0;
    virtual void move()=0;
};
class Dog:Animal{
    void speak()override{
        std::cout<<"Woof!"<<std::endl;
    }
};
int main(){
    Animal *p;
    p=new animal;
    std::不会
}
    */
/*

#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<int> vec(n);
    int *p=vec[0];
    for(int i=0;i<n;i++){
        std::cout<<*(p+i)<<" ";
    }
    for(int i=0;i<n;i++){
        std::cout<<vec[i];
    }
    迭代器是什么？
}

*/