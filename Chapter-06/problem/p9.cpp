#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Node {
    string name;
    double price;
};

int main(void) {
    ifstream in;
    in.open("p9.txt");
    int cnt, cnt2 = 0;
    in >> cnt;
    Node *node = new Node[cnt];
    for (int i = 0; i < cnt; i++) {
        in.get();
        getline(in, node[i].name);
        in >> node[i].price;
    }
    cout << "Grand Patrons" << endl;
    for (int i = 0; i < cnt; i++) {
        if (node[i].price > 10000) {
            cout << node[i].name << endl;
            cnt2++;
        }
    }
    cout << "Patrons" << endl;
    for (int i = 0; i < cnt; i++) {
        if (node[i].price <= 10000) {
            cout << node[i].name << endl;
        }
    }
    if (cnt2 == cnt) {
        cout << "none" << endl;
    }
    return 0;
}