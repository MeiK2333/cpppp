#include <iostream>
using namespace std;

/*
input:
abc
def
abc
def

output:
abc
def
abc

*/
int main() {
    char s1[10], s2[10];
    cin.getline(s1, 10);
    cin.getline(s2, 10);
    cout << s1 << endl;
    cout << s2 << endl;

    cin.get(s1, 10);  // cin.get(s1, 10).get(s2, 10)
    cin.get(s2, 10);
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
