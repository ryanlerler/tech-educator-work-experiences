#include <iostream>
using namespace std;

int summation(int);

int main() {
    int n;
    int result {};

    cout << "Please input a number: ";
    cin >> n;
    cout << endl;
    cout << "Find the sum of all the numbers from 1 to " << n << ": " << endl;

    for (int i = 1; i < n+1; i++) {
        cout << i;
        if (i == n)
            break;
        cout << "+";
    }

    result = summation(n);
    cout << "=" << result;

    return 0;
}   
int summation(int n) {
    if (n>1)
        return (n + summation(n-1));
    else
        return 1;
}