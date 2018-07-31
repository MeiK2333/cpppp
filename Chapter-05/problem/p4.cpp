#include <iostream>

using namespace std;

int main(void) {
    double a = 100, b = 100;
    int year = 0;
    while (a >= b) {
        a = a + 10;
        b = b * 1.05;
        year++;
    }
    cout << "Year: " << year << endl;
    cout << "Daphne: " << a << endl;
    cout << "Cleo: " << b << endl;
    return 0;
}