#include <iostream>
#include <array>

using namespace std;

int main(void) {
    array<double, 10> arr;
    double ave = 0;
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        ave += arr[i];
    }
    ave /= 10;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > ave) {
            cnt++;
        }
    }
    cout << "ave: " << ave << endl;
    cout << "cnt: " << cnt << endl;
    return 0;
}