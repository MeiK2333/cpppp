#include <iostream>

using namespace std;

const int max_line = 20;

struct CandyBar {
    char brand[max_line];
    double weight;
    int calorie;
};

int main(void) {
    struct CandyBar snack{"Mocha Munch", 2.3, 350};
    cout << "brand: " << snack.brand << endl
         << "weight: " << snack.weight << endl
         << "calorie: " << snack.calorie << endl;
    return 0;
}