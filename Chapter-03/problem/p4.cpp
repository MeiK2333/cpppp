#include <iostream>

using namespace std;

const int c1 = 24;
const int c2 = 60;
const int c3 = 60;

int main(void) {
    long long time;
    cout << "Enter the number of seconds: " << ends;
    cin >> time;
    cout << time << " seconds = " << (time / c1 / c2 / c3) << " days, " << (time / c2 / c3) % c1 << " hours, "
         << (time / c3) % c2 << " minutes, " << time % c3 << " seconds" << endl;
    return 0;
}