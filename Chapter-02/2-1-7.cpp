#include <string>
#include <iostream>
using namespace std;

/**
output:
ab\n
cd
e
123()()
 */
int main() {
    string str = R"(ab\n
cd
e)";
    cout << str << endl;
    string str2 = R"+*(123()())+*";
    cout << str2 << endl;
    return 0;
}
