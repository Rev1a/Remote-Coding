#include<iostream>
using namespace std;
class Book{
    private://私有 外界无法访问
    string title;
    int pages;
    public://公有
    void setTitle(string a){
        title = a;
    }
    void setPages(int b){
        pages = b;
    }
    string getTitle()const{
        return title;
    } 
    int  getPages()const{
        return pages;
    }
};
int calculateTotalPages(Book* books[], int length){
    int total=0;
    for(int i=0;i<length;i++){
        total+=books[i]->getPages();
    }
    return total;
}
int main(){
    Book temp;
    temp.setTitle("Time");
    temp.setPages(911);
    const Book bs =temp;
    cout<<"书名是"<<bs.getTitle()<<" "<<"页数是"<<bs.getPages()<<endl;
    Book* p = new Book;
    p->setPages(114514);
    p->setTitle("Sensei");
    cout<<"你叫什么名字？"<<p->getTitle()<<"让我看看！"<<p->getPages()<<endl;
    delete p;
    p = nullptr;
    Book* books[3];
    
    for(int i=0;i<3;i++){
        books[i] = new Book;
        string str;
        int n;
        cin>>str>>n;
        books[i]->setTitle(str);
        books[i]->setPages(n);
    }
    int sum=calculateTotalPages(books,3);
    for(int i=0;i<3;i++){
        cout<<books[i]->getTitle()<<" "<<books[i]->getPages()<<endl;
    delete books[i];
    books[i]=nullptr;
    }
    
} 
//   9min52s


/*
练习题 2：指针与成员函数

题目：
继续用上面的 Book 类：

创建一个 Book 的动态对象（使用 new），设置书名和页数。

用指针访问对象成员，调用 getTitle 和 getPages 输出信息。

使用 delete 释放对象。

知识点：动态对象、指针、-> 运算符、内存管理。

练习题 3：指针数组

题目：
创建 3 本书的数组，每本书用动态对象表示：

创建 Book* books[3]。

通过循环输入书名和页数。

使用循环输出每本书的书名和页数。

释放所有动态对象。

知识点：指针数组、循环访问、动态分配和释放。

练习题 4：全局函数操作对象数组

题目：
在题目 3 的基础上，写一个全局函数：

int calculateTotalPages(Book* books[], int length);


功能：返回所有书页数的总和。

在 main 中调用此函数，并输出结果。

知识点：全局函数、通过指针访问对象成员、数组传参。

练习题 5：综合应用

题目：
设计一个 Student 类（复习你之前学的）：

私有成员：name 和 score。

公有成员函数：setName、setScore、getName、getScore。

在 main 中：

创建一个指针数组 Student* students[5]。

输入每个学生的姓名和分数。

写一个全局函数 float calculateAverageScore(Student* students[], int length) 返回平均分。

输出每个学生姓名和分数，并输出平均分。

最后释放所有动态对象。

知识点：封装、指针数组、动态对象、常量成员函数、全局函数。
*/