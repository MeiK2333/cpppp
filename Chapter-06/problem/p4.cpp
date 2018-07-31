#include <iostream>

using namespace std;

const int strsize = 1024;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(void) {
    bop b[5] = {
            {"WimpMacho",    "title1",            "bopname1", 0},
            {"Raki Rhodes",  "Junior Programmer", "bopname2", 1},
            {"Celia Laiter", "title3",            "MIPS",     2},
            {"Hoppy Hipman", "Analyst Trainee",   "bopname4", 1},
            {"Pat Hand",     "title5",            "LOOPY",    2}
    };
    char ch;
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name      b. display by title" << endl;
    cout << "c. display by bopname   d. display by preference" << endl;
    cout << "q. quit" << endl;
    do {
        cout << "Enter your choice: " << ends;
        cin >> ch;
        switch (ch) {
            case 'a':
                for (int i = 0; i < 5; i++) {
                    cout << b[i].fullname << endl;
                }
                break;
            case 'b':
                for (int i = 0; i < 5; i++) {
                    cout << b[i].title << endl;
                }
                break;
            case 'c':
                for (int i = 0; i < 5; i++) {
                    cout << b[i].bopname << endl;
                }
                break;
            case 'd':
                for (int i = 0; i < 5; i++) {
                    cout << (b[i].fullname + b[i].preference * strsize) << endl;
                }
                break;
            case 'q':
                cout << "Bye!" << endl;
                return 0;
            default:
                break;
        }
    } while (cin.good());
    return 0;
}