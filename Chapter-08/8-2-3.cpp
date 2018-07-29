#include <iostream>
using namespace std;

void fun1(int & len) {
    cout << len << endl;
    len++;
}

void fun2(const int & len) {
    // len++;  // 错误，const修饰的变量无法修改
    cout << len << endl;
}

int main() {
    short int a = 1;
    // fun1(a);  // 错误，引用类型参数必须严格匹配
    fun2(a);  // 正确，const & 类型的可以存在类型变换

    int b = 1;
    fun1(b);
    fun2(b);

    // fun1(1);  // 错误，引用类型参数必须为左值
    fun2(1);  // 正确，const & 类型的参数可以是右值
    return 0;
}
