#include <iostream>

using namespace std;

double *Fill_array(double *arr, int len) {
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
        if (!cin) {
            return &arr[i];
        }
    }
    return arr + len;
}

void Show_array(double *arr, double *end) {
    while (arr != end) {
        cout << *arr << " " << ends;
        arr++;
    }
    cout << endl;
}

void Reverse_array(double *arr, double *end) {
    double *i = arr, *j = end - 1;
    double t;
    while (i < j) {
        swap(*i, *j);
        i++;
        j--;
    }
}

int main(void) {
    double arr[10], *pr;
    pr = Fill_array(arr, 10);
    Show_array(arr, pr);
    Reverse_array(arr, pr);
    Show_array(arr, pr);
    return 0;
}