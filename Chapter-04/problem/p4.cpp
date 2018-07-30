#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string first_name;
    string last_name;
    cout << "Enter your first name: " << ends;
    getline(cin, first_name);
    cout << "Enter your last name: " << ends;
    getline(cin, last_name);
    cout << "Here's the information in a single string: " << last_name << ", " << first_name << endl;
    return 0;
}