#include <iostream>
int main() {
    int a = 6;
    int* p = &a;

    std::cout << "a = " << a << "\n";
    std::cout << "p = " << p << "\n";       // 地址
    std::cout << "*p = " << *p << "\n";     // 指针解引用
    *p = 10;  // 通过指针修改 a 的值
    std::cout << "修改后 a = " << a << "\n";

    return 0;
}
//sizeof 只能在编译期已知大小的数组上使用（普通数组）。
//如果是 vector<int> 或动态分配数组 (new int[n])，要用 .size() 
//或保存的 n，不能用 sizeof。