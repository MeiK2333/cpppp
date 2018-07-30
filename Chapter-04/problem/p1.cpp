#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string first_name, last_name;
    char grade;
    int age;
    cout << "What is your first name? " << ends;
    getline(cin, first_name);
    cout << "What is your last name? " << ends;
    getline(cin, last_name);
    cout << "What letter grade do you deserve? " << ends;
    cin >> grade;
    cout << "What is your age? " << ends;
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(int(grade) + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}