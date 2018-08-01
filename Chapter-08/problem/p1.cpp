#include <iostream>
#include <string>

using namespace std;

void func(string str) {
    cout << str << endl;
}

void func(string str, int &n) {
    static int cnt = 0;
    if (n != 0) {
        cnt++;
        n = cnt;
        for (int i = 0; i < n; i++) {
            cout << str << endl;
        }
    }
}

int main(void) {
    string str1 = "Hello World!";
    string str2 = "Hello";
    string str3 = "World!";
    int a = 10000;
    func("Hello World!");
    func("Hello", a);
    func("World!", a);
    return 0;
}