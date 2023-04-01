#include <iostream>
using namespace std;

int square (int n) {
    cout << "In square(): " << &n << endl;
    n *= n;
    return n;
}

int main () {
    int number = 8;
    cout << "In main(): " << & number << endl;
    cout << number << '\n' << endl;

    cout << square(number) << endl;
    cout << number << endl;
}