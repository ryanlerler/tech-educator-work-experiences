#include <iostream>
#include <string>
using namespace std;

int main() {
    string current_drink {"Strawberry Milkshake"};

    cout << "My current drink is: " << current_drink << endl;
    cout << "\n--------------Erase-----------" << endl;
    current_drink.erase(0,10);
    cout << "My current drink is: " << current_drink << endl;

    return 0;
}