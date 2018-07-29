#include <iostream>
using namespace std;

/*
output:
a
a a
*/
int main() {
    char ch = 'a';
    cout.put(ch);
    cout << endl;
    cout.put(ch).put(' ').put(ch).put('\n');
    return 0;
}