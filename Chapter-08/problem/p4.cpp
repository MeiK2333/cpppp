#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy &stry, const char *str) {
    stry.str = new char[strlen(str) + 1];
    strcpy(stry.str, str);
}

void show(const stringy &stry) {
    cout << stry.str << endl;
}

void show(const stringy &stry, int n) {
    for (int i = 0; i < n; i++) {
        cout << stry.str[i];
    }
    cout << endl;
}

void show(const char *str) {
    cout << str << endl;
}

void show(const char *str, int n) {
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;
}

int main(void) {
    stringy beany;
    char testing[] = "Reality isn't what is used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}