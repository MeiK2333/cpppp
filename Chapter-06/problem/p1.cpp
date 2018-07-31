#include <iostream>
#include <cctype>

using namespace std;

int main(void) {
    char ch;
    while (cin >> ch) {
        if (isalpha(ch)) {
            if (islower(ch)) {
                cout << char(toupper(ch));
            } else {
                cout << char(tolower(ch));
            }
        }
        if (ch == '@') {
            break;
        }
    }
    return 0;
}