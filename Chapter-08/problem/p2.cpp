#include <iostream>
#include <cstring>

using namespace std;

const int max_line = 1024;

struct CandyBar {
    char brand[max_line];
    double weight;
    int calorie;
};

void
func(CandyBar &candyBar, const char *brand = "Millennium Munch", const double weight = 2.85, const int calorie = 350) {
    strcpy(candyBar.brand, brand);
    candyBar.weight = weight;
    candyBar.calorie = calorie;
}

void func1(const CandyBar &candyBar) {
    cout << candyBar.brand << endl;
    cout << candyBar.weight << endl;
    cout << candyBar.calorie << endl;
}

int main(void) {
    CandyBar candyBar;
    func(candyBar);
    func1(candyBar);
    return 0;
}