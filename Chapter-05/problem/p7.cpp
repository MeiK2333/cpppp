#include <iostream>
#include <string>

using namespace std;

struct car {
    string make;
    int year;
};

int main(void) {
    int cnt;
    cout << "How many cars do you wish to catalog? " << ends;
    cin >> cnt;
    car *c = new car[cnt];
    for (int i = 0; i < cnt; i++) {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: " << ends;
        cin.get();
        getline(cin, c[i].make);
        cout << "Please enter the year made: " << ends;
        cin >> c[i].year;
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < cnt; i++) {
        cout << c[i].year << " " << c[i].make << endl;
    }
    return 0;
}