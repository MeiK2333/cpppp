#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
    ifstream in;
    in.open("p8.cpp");
    char ch;
    int cnt = 0;
    while (in >> ch) {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}