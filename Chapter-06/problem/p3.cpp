#include <iostream>

using namespace std;

int main(void) {
    char ch;
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore      p) pianist" << endl
         << "t) tree           g) game" << endl;
    do {
        cout << "Please enter a c, p, t, or g: " << ends;
        cin >> ch;
        switch (ch) {
            case 'c':
                cout << "carnivore" << endl;
                return 0;
            case 'p':
                cout << "pianist" << endl;
                return 0;
            case 't':
                cout << "tree" << endl;
                return 0;
            case 'g':
                cout << "game" << endl;
                return 0;
            default:
                break;
        }
    } while (cin.good());
    return 0;
}