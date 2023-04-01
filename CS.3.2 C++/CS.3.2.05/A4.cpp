#include <iostream>
using namespace std;

int add (int, int);

int main() {
    int num1;
    int num2;
    int sum;
    cout << "Please input 2 integer numbers: ";
    cin >> num1 >> num2;

    sum = add(num1, num2);

    cout << "\n" << "The total sum of the numbers is " << sum << endl;

    return 0;
}

int add(int a, int b) {
    return (a + b);
}