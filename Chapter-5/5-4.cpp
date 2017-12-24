#include <iostream>
#include <string>
using namespace std;

int main() {
    double price[5] = {1, 2, 3, 4, 5};
    for (double x : price) {
        cout << x << endl;
    }
    cout << endl;
    for (int y : {5, 4, 3, 2, 1}) {  // 很神奇的写法
        cout << y << endl;
    }
    cout << endl;
    string str = "2333";
    for (char &c : str) {  // 带 & 时可以修改对应的内容
        c = '6';
    }
    cout << str << endl;
    cout << endl;
    char s[3][4] = {"123", "456", "789"};
    for (auto a : s) {  // 配合 auto 效果更佳
        cout << a << endl;
    }
    return 0;
}