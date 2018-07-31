#include <iostream>
#include <string>

using namespace std;


int main(void) {
    string str;
    int cnt = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    while (cin >> str) {
        if (str == "done") {
            break;
        } else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}