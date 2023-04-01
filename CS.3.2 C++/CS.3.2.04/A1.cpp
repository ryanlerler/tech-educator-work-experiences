#include <iostream>
using namespace std;

int main() {

    int num1 {5};
    int num2 {10};
    int num3 {15};

    cout << (num1 < num2 && num3 < num2 || num1 + num2 == num3);

    return 0;
}