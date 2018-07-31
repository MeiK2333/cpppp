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
    int s[12], sum = 0;
    for (int i = 0; i < 12; i++) {
        cout << month[i] << ": " << ends;
        cin >> s[i];
        sum += s[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}