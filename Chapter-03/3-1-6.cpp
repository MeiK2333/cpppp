#include <iostream>
using namespace std;

/*
output:
42
2a
52
52
42
*/
int main() {
    int num = 42;
    cout << num << endl;  // 十进制
    cout << hex << num << endl;  // 十六进制
    cout << oct << num << endl; // 八进制
    cout << num << endl;  // 还是八进制
    cout << dec << num << endl;  // 十进制
    cin >> hex >> num;
    cout << num << endl;
    return 0;
}