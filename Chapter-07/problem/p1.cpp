#include <iostream>

using namespace std;

double ans(double x, double y) {
    return 2.0 * x * y / (x + y);
}

int main(void) {
    double x, y;
    while (cin >> x >> y, x and y) {
        cout << ans(x, y) << endl;
    }
    return 0;
}