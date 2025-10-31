#include <iostream>
void swap(int *a, int *b) {
    int temp = *a;  // 保存 *a 的值
    *a = *b;        // *a 改成 *b 的值
    *b = temp;      // *b 改成原来的 *a
}

int main() { 
    int a = 114, b = 514;
    int *p1 = &a;
    int *p2 = &b;

    swap(p1, p2);  // 交换 a 和 b 的值

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}

//指针交换值：用 *a 和 *b 访问指向的内容，而不是改变指针本身

//如果想交换指针本身，则要传 指针的指针，但这里题目只要求交换整数值