#include <iostream>

using namespace std;

int main(void) {
    int cnt;
    cout << "Enter number of rows: " << ends;
    cin >> cnt;
    for (int i = 1; i <= cnt; i++) {
        for (int j = 0; j < cnt - i; j++) {
            cout << ".";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}