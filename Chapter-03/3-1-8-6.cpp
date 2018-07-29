#include <iostream>
using namespace std;

/*
output:
a b
*/
int main() {
    wchar_t wc = L'a';
    wcout << wc << L" " << L'b' << endl;
    // wcin >> wc;
    // wcout << wc << endl;
    return 0;
}