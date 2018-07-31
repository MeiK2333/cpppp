#include <iostream>

using namespace std;

double probability(unsigned int number, unsigned int picks) {
    double result = 1.0;
    double n;
    unsigned int p;

    for (n = number, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}

int main(void) {
    cout << 1 / probability(47, 5) * (1.0 / 27) << endl;
    return 0;
}