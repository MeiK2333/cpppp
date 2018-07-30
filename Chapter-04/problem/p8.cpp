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
    Pizza *pizza = new Pizza();
    cout << "Weight: " << ends;
    cin >> pizza->weight;
    cin.get();  // 清除行末换行符
    cout << "Factory: " << ends;
    cin.getline(pizza->factory, sizeof(pizza->factory));
    cout << "Length: " << ends;
    cin >> pizza->length;
    cout << "Factory: " << pizza->factory << endl
         << "Length: " << pizza->length << endl
         << "Weight: " << pizza->weight << endl;
    return 0;
}