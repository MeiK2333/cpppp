#include <iostream>
#include <vector>
using namespace std;

/*
output:
0
1
2
3
4
5
6
0
1
2
3
4
5
6
*/
int main() {
    vector<int> scores = { 0, 1, 2, 3, 4, 5, 6 };

    // old
    for (vector<int>::iterator pv = scores.begin(); pv != scores.end(); pv++) {
        cout << *pv << endl;
    }

    // new
    for (auto pv = scores.begin(); pv != scores.end(); pv++) {
        cout << *pv << endl;
    }
    return 0;
}