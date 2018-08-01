#include <iostream>

using namespace std;

template<typename T>
T max5(T t[]) {
    T max = t[0];
    for (int i = 1; i < 5; i++) {
        max = max > t[i] ? max : t[i];
    }
    return max;
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 0};
    double b[5] = {1.1, 2.2, 3.3, 5.5, 10.1};
    cout << max5(a) << endl;
    cout << max5(b) << endl;
    return 0;
}