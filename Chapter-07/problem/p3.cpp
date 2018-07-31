#include <iostream>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void func1(box b) {
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
}

void func2(box *b) {
    b->volume = b->length * b->width * b->height;
}

int main(void) {
    box b{"", 1, 2, 3, 0};
    func1(b);
    func2(&b);
    func1(b);
    return 0;
}