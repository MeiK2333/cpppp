#include <iostream>
using namespace std;

/*
complie cmd: g++ 3-1-3.cpp --std=gnu++11
output:
24
36
0
0
*/
int main() {
    int a = { 24 };
    cout << a << endl;
    int b{ 36 };
    cout << b << endl;
    int c = {};
    int d{};
    cout << c << endl;
    cout << d << endl;
    return 0;
}