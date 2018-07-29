#include <iostream>

using namespace std;

double change(double light_years) {
    return 63240 * light_years;
}

int main(void) {
    double light_years;
    cout << "Enter the number of light years: " << ends;
    cin >> light_years;
    cout << light_years << " light years = " << change(light_years) << " astronomical units." << endl;
    return 0;
}
