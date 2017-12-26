#include <iostream>
using namespace std;

const double * f1(const double ar[], int n) {
    cout << "func1" << endl;
    return &ar[n];
}

const double * f2(const double ar[], int n) {
    cout << "func2" << endl;
    return &ar[n];
}

const double * f3(const double * ar, int n) {
    cout << "func3" << endl;
    return &ar[n];
}


/*
output:
func1
0
func2
1
func2
2
func3
3
func1
4
func2
5
*/
int main() {
    double arr[] = {0, 1, 2, 3, 4, 5, 6};
    // 正常使用
    const double * (* p1)(const double *, int) = f1;
    cout << * p1(arr, 0) << endl;
    auto p2 = f2;
    cout << * (* p2)(arr, 1) << endl;

    // 有点意思
    const double * (* pa[3])(const double *, int) = {f1, f2, f3};
    cout << * (* pa[1])(arr, 2) << endl;
    cout << * pa[2](arr, 3) << endl;

    // 通过auto创建指向数组指针的指针
    auto pc = &pa;
    // 或者
    const double * (* (* pd)[3])(const double *, int) = &pa;  // 这玩意能写的过编译器也是个本事
    cout << * (* pd)[0](arr, 4) << endl;
    cout << * (* (* pd)[1])(arr, 5) << endl;  // 指向函数指针数组的数组指针的指针 美不美滋滋啊

    return 0;
}