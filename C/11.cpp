/*#include<iostream>
#include<string>
class Detector{
    public:
    void detect(){
        std::cout<<"We Spot An Enemy!"<<std::endl;
    };
  virtual void clear()=0;
};
class Armor:public Detector{    //一般是私有继承，得加public
   virtual void detect(){
        std::cout<<"Enemy Spotted!"<<std::endl;
    };
    void clear()override{
        std::cout<<"Good Luck And Fair Seas"<<std::endl;
    }
};
class Buff:Detector{
  virtual void detect(){   
        std::cout<<"Enemy Dectected!"<<std::endl;
    };
};
*/
/*                                                      //子类想重写父类函数，要加virtual
#include<iostream>
int main(){
    unsigned int sides[3];
    unsigned int *p=sides;
    std::cin>>*(p+0)>>*(p+1)>>*(p+2);
    if (*(p+0) + *(p+1) > *(p+2) &&
    *(p+0) + *(p+2) > *(p+1) &&
    *(p+1) + *(p+2) > *(p+0)) {
    std::cout << "Yes\n";
} else {
    std::cout << "No\n";
}
    return 0;
}
*/
