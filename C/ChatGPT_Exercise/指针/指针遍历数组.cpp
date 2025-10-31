#include <iostream>
int main() {
    int arr[5];
    int *p = arr;

    // 输入数组元素
    for (int i = 0; i < sizeof(arr); i++) {
        std::cin >> arr[i];
    }

    // 用指针遍历数组输出
    for (int i = 0; i < 5; i++) {
        std::cout << *(p + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
