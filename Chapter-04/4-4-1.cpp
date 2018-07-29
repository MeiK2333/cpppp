#include <iostream>
using namespace std;

struct node {
    int a;
    double b;
    char c;
};

int main() {
    node a = {0, 1.1, 'a'};
    node b{1, 2.2, 'b'};
    node c{};  // 全部初始化为 0， C++11
    return 0;
}