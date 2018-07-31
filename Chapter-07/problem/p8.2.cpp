#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};

struct str {
    double arr[Seasons];
};


void fill(double *arr) {
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> arr[i];
    }
}

void show(double *arr) {
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

int main(void) {
    str expenses;
    fill(expenses.arr);
    show(expenses.arr);
    return 0;
}