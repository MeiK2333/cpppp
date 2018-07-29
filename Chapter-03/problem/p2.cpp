#include <iostream>

using namespace std;

const double c1 = 12;
const double c2 = 0.0254;
const double c3 = 2.2;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * c1 + b << endl;
    cout << (a * c1 + b) * c2 << endl;
    cout << c / c3 << endl;
    cout << ((a * c1 + b) * c2) / ((c / c3) * (c / c3)) << endl;
    return 0;
}