#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    double price;
};

int main(void) {
    int cnt, cnt2 = 0;
    cin >> cnt;
    Node *node = new Node[cnt];
    for (int i = 0; i < cnt; i++) {
        cin >> node[i].name;
        cin >> node[i].price;
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