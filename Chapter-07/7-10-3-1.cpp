#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    cout << "a:\t" << a << endl;
    cout << "a+1:\t" << a + 1 << endl;  // 数组中的下一个元素，即 a[1]
    cout << "*(a+1):\t" << * (a + 1) << endl;
    cout << "&a[4]:\t" << &a[4] << endl;
    cout << "&a+1:\t" << &a + 1 << endl;  // 指向数组之后的位置
    // **&a = *a = a[0]
    return 0;
}