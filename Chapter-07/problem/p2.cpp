#include <iostream>

using namespace std;

int input(double s[]) {
    for (int i = 0; i < 10; i++) {
        cin >> s[i];
        if (s[i] == 0) {
            return i;
        }
    }
    return 10;
}

double ave(double s[], int length) {
    double a = 0;
    for (int i = 0; i < length; i++) {
        a += s[i];
    }
    return a / length;
}

void print(double a) {
    cout << a << endl;
}

int main(void) {
    double s[10];
    int cnt = input(s);
    double a = ave(s, cnt);
    print(a);
    return 0;
}