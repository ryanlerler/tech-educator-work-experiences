#include <iostream>
using namespace std;

void name_printer() {
    string name;
    cout << "What is your name? " << endl;
    cin >> name;
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
}

int main() {
    name_printer();
    return 0;
}