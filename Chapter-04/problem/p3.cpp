#include <iostream>
#include <cstring>

using namespace std;

const int max_length = 20;

int main(void) {
    char first_name[max_length];
    char last_name[max_length];
    cout << "Enter your first name: " << ends;
    cin.getline(first_name, sizeof(first_name));
    cout << "Enter your last name: " << ends;
    cin.getline(last_name, sizeof(last_name));
    cout << "Here's the information in a single string: " << last_name << ", " << first_name << endl;
    return 0;
}