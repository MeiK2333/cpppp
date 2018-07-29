#include <iostream>
using namespace std;

template <typename AnyType>
void Swap(AnyType &a, AnyType &b) {
    AnyType temp;
    temp = a;
    a = b;
    b = temp;
}

template <class T>
void Swap(T a[], T b[], int n) {
    T temp;
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

// 显式具体化
template <>
void Swap<double>(double &a, double &b) {
    cout << "double swap" << endl;
    double temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    Swap(a, b);
    cout << a << " " << b << endl;

    int a1[] = {1, 2, 3, 4, 5};
    int b1[] = {0, 0, 0, 0, 0, 0, 0};
    Swap(a1, b1, 3);
    for (int i = 0; i < 5; i++) {
        cout << a1[i] << ends;
    }
    cout << endl;
    for (int i = 0; i < 7; i++) {
        cout << b1[i] << ends;
    }
    cout << endl;

    double a2 = 1.0, b2 = 3.3;
    Swap(a2, b2);
    cout << a2 << " " << b2 << endl;
    return 0;
}