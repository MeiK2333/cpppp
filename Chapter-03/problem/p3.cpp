#include <iostream>

using namespace std;

const int c1 = 60;
const int c2 = 60;

int main(void) {
    double a, b, c;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: " << ends;
    cin >> a;
    cout << "Next, enter the minutes of arc: " << ends;
    cin >> b;
    cout << "Finally, enter the seconds of arc: " << ends;
    cin >> c;
    cout << a << " degrees, " << b << " minutes, " << c << " seconds = " << (a * 1.0 + b / c1 + c / c1 / c2)
         << " degrees" << endl;
    return 0;
}