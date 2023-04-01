#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    {
        int x;
        x = 50;
        y = 50;
        cout << "inner block:\n";
        cout << "x: " << x << '\n';
        cout << "y: " << y << '\n';
    }
    cout << "outer block: \n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    return 0;
}