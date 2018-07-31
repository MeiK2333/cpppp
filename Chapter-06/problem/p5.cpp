#include <iostream>

using namespace std;

int main(void) {
    int i;
    while (cin >> i) {
        if (i < 0) {
            break;
        }
        double ans = 0;
        if (i > 5000) {
            if (i > 15000) {
                ans += 10000 * 0.1;
            } else {
                ans += (i - 5000) * 0.1;
            }
        }
        if (i > 15000) {
            if (i > 35000) {
                ans += 20000 * 0.15;
            } else {
                ans += (i - 15000) * 0.15;
            }
        }
        if (i > 35000) {
            ans += (i - 35000) * 0.2;
        }
        cout << ans << endl;
    }
    return 0;
}