#include <iostream>

using namespace std;

void func1(void) {
    cout << "Three blind mice" << endl;
}

void func2(void) {
    cout << "See how they run" << endl;
}

int main(void) {
    func1();
    func1();
    func2();
    func2();
    return 0;
}