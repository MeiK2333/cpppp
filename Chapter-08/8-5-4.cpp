#include <iostream>
using namespace std;

template <typename T>
T Add(T a, T b) {
    return a + b;
}

int main() {
    int a = 6;
    double b = 3.3;
    // cout << Add(a, b) << endl; 错误：无参数类型匹配的函数
    cout << Add<double>(a, b) << endl;  // 可以，a 的类型被强制类型转换为 double
    return 0;
}