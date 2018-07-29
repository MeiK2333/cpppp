#include <iostream>
using namespace std;

/*
output:
0x7fff54041b38
0x7fff54041b38
0x7fff54041b38
*/
int main() {
    int a;
    int & b = a;
    int * c = & a;
    cout << &a << endl;
    cout << &b << endl;
    cout << c << endl;
    return 0;
}
