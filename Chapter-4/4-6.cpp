#include <iostream>
using namespace std;

enum color {
    red = 1,
    blue,
    yellow,
    green
};

enum {
    hehe,
    haha,
    heihei
} xiao;

int main() {
    color c;
    c = blue;
    cout << c << endl; // 2
    return 0;
}