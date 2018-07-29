#include <iostream>
using namespace std;

int main() {
    // cin 在需要一个 bool
    // 类型值的场景下会返回最后一次读取的结果，若出现文件结束、磁盘故障或其他错误，则返回false
    // cin 的一系列输入方法的返回值就是 cin 本身，因此可以使用像 while (cin.get(ch)) 的方式来读入。
    char ch;
    while (cin >> ch) { // 在读取结束的时候会自动的退出循环
        cout << ch << endl;
    }
    return 0;
}
