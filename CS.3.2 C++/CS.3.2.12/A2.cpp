#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: \n";
    cin >> x;
    cout << "Value of the address of pointer of "<< x << " is " << &x <<"\n";
    return 0;
}