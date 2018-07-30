#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string name;
    string dessert;

    cout << "Enter your name: " << ends;
    getline(cin, name);
    cout << "Enter your favorite dessert: " << ends;
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << "." << endl;
    return 0;
}