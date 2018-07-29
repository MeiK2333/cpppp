#include <iostream>
#include <cmath>
using namespace std;

typedef struct {
    double x;
    double y;
} point;

// 较慢的方法
double len(point a) {
    return sqrt(a.x * a.x + a.y * a.y);
}

void len(const point * a, double * b) {
    *b = sqrt(a->x * a->x + a->y * a->y);
}

int main() {
    point p = {1, 2};
    double a = len(p);  // 较慢的方法
    cout << a << endl;
    len(&p, &a);  // 较快的方法
    cout << a << endl;
    return 0;
}