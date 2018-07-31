#include <iostream>

using namespace std;

long long func(long long n) {
    if (n == 0 or n == 1) {
        return 1;
    }
    return n * func(n - 1);
}

int main(void) {
    int n;
    while (cin >> n) {
        cout << func(n) << endl;
    }
    return 0;
}