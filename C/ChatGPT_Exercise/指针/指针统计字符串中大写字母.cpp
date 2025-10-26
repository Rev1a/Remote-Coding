#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char *p = &str[0];
    int nums=0;
    for(int i=0;i<str.size();i++){
        if(*(p+i)<='Z' && *(p+i)>='A'){nums++;}
    }
    cout<<nums;
    return 0;
}
/*
字符串对象可以用 &str[0] 或 str.data() 获取首字符指针

通过 *(p + i) 可以访问每个字符

大写字母判断：'A' <= c <= 'Z'
*/