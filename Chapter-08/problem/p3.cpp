#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void func(string &str) {
    for (char &ch : str) {
        ch = toupper(ch);
    }
}

int main(void) {
    string str;
    while (true) {
        cout << "Enter a string (q to quit): " << ends;
        getline(cin, str);
        if (str == "q") {
            cout << "Bye." << endl;
            break;
        }
        func(str);
        cout << str << endl;
    }

    return 0;
}