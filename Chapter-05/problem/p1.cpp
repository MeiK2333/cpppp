#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    while (a <= b) {
        sum += a;
        a++;
    }
    cout << sum << endl;
    return 0;
}