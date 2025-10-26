#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // 输入数组长度

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];  // 输入元素
    }

    int *p = vec.data();       // 获取首元素指针
    int MAX = *p;              // 初始化为第一个元素
    for(int i = 1; i < n; i++){
        if(*(p + i) > MAX) MAX = *(p + i);
    }

    cout << MAX << endl;
    return 0;
}

/*
int *p = vec.data(); → 得到指向 vector 首元素的指针

*(p + i) → 用指针访问第 i 个元素

不要把 data() 当作长度，vector 的长度要用 vec.size()
*/