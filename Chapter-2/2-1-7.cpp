#include <string>
#include <iostream>
using namespace std;

/**
 *  Output: ab\n
cd
e
 */
int main() {
    string str = R"(ab\n
cd
e)";
    cout << str << endl;
    return 0;
}
