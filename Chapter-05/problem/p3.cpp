#include <iostream>

using namespace std;

int main(void) {
    int sum = 0, a;
    while (cin >> a, a) {
        sum += a;
    }
    cout << sum << endl;
    return 0;
}