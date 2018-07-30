#include <iostream>
#include <array>

using namespace std;

int main(void) {
    array<double, 3> arr;
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cout << (arr[0] + arr[1] + arr[2]) / 3 << endl;
    return 0;
}