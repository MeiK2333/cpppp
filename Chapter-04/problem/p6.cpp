#include <iostream>

using namespace std;

const int max_line = 20;

struct CandyBar {
    char brand[max_line];
    double weight;
    int calorie;
};

int main(void) {
    struct CandyBar snack[3]{
            {"Mocha Munch",  2.3,  350},
            {"Mocha Munch1", 2.31, 3501},
            {"Mocha Munch2", 2.32, 3502}
    };
    cout << "brand: " << snack[0].brand << endl
         << "weight: " << snack[0].weight << endl
         << "calorie: " << snack[0].calorie << endl;
    cout << "brand: " << snack[1].brand << endl
         << "weight: " << snack[1].weight << endl
         << "calorie: " << snack[1].calorie << endl;
    cout << "brand: " << snack[2].brand << endl
         << "weight: " << snack[2].weight << endl
         << "calorie: " << snack[2].calorie << endl;
    return 0;
}