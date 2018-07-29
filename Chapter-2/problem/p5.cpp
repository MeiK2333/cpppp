#include <iostream>

using namespace std;

double change(double in) {
    return 1.8 * in + 32;
}

int main(void) {
    double in;
    cout << "Please enter a Celsius value: " << ends;
    cin >> in;
    cout << in << " degrees Celsius in " << change(in) << " degrees Fahrenheit." << endl;
    return 0;
}