#include <iostream>

using namespace std;

int main(void) {
    const string month[12] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };
    int s[3][12], sum[3]{};
    for (int j = 0; j < 3; j++) {
        cout << "Year: " << j + 1 << endl;
        for (int i = 0; i < 12; i++) {
            cout << month[i] << ": " << ends;
            cin >> s[j][i];
            sum[j] += s[j][i];
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << "Year: " << i + 1 << endl;
        cout << "Sum: " << sum[i] << endl;
    }
    return 0;
}