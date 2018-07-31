#include <iostream>
#include <cstring>

using namespace std;

const int max_line = 1024;

int main(void) {
    char str[max_line];
    int cnt = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    while (cin >> str) {
        if (strcmp(str, "done") == 0) {
            break;
        } else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}