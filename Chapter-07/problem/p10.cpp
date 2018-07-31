#include <iostream>

using namespace std;

double add(double x, double y) {
    return x + y;
}

double mul(double x, double y) {
    return x * y;
}

double sub(double x, double y) {
    return x - y;
}

double calculate(double x, double y, double(func)(double, double)) {
    return func(x, y);
}

int main(void) {
    double x = 2, y = 1;
    double (*func[3])(double, double) = {add, mul, sub};
    cout << calculate(x, y, func[0]) << endl;
    cout << calculate(x, y, func[1]) << endl;
    cout << calculate(x, y, func[2]) << endl;
    return 0;
}