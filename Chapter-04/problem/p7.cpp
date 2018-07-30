#include <iostream>
#include <cstring>

using namespace std;

const int max_length = 1024;

struct Pizza {
    char factory[max_length];
    double length;
    double weight;
};

int main(void) {
    Pizza pizza;
    cout << "Factory: " << ends;
    cin.getline(pizza.factory, sizeof(pizza.factory));
    cout << "Length: " << ends;
    cin >> pizza.length;
    cout << "Weight: " << ends;
    cin >> pizza.weight;
    cout << "Factory: " << pizza.factory << endl
         << "Length: " << pizza.length << endl
         << "Weight: " << pizza.weight << endl;
    return 0;
}