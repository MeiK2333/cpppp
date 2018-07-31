#include <iostream>

using namespace std;

int Fill_array(double *arr, int len) {
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
        if (!cin.good()) {
            return i;
        }
    }
    return len;
}

void Show_array(double *arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " " << ends;
    }
    cout << endl;
}

void Reverse_array(double *arr, int len) {
    int i = 0, j = len - 1;
    double t;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(void) {
    double arr[10];
    Fill_array(arr, 10);
    Show_array(arr, 10);
    Reverse_array(arr, 10);
    Show_array(arr, 10);
    return 0;
}