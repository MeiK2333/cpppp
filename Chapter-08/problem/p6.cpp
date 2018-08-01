#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
T maxn(const T t[], int n) {
    T max = t[0];
    for (int i = 1; i < n; i++) {
        max = max > t[i] ? max : t[i];
    }
    return max;
}

char *maxn(char *strs[], int n) {
    int max = strlen(strs[0]);
    char * pos = strs[0];
    for (int i = 1; i < n; i++) {
        if (max < strlen(strs[i])) {
            max = strlen(strs[i]);
            pos = strs[i];
        }
    }
    return pos;
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 0};
    double b[5] = {1.1, 2.2, 3.3, 5.5};
    cout << maxn(a, 5) << endl;
    cout << maxn(b, 4) << endl;
    char *strs[] = {
            "a", "bb", "ccc", "ddddd", "eeeee"
    };
    cout << maxn(strs, 5) << endl;
    return 0;
}