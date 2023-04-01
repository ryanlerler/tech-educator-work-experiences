#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    cout << "Enter the first number: \n";
    cin >> *ptr1;
    cout << "Enter the second number: \n";
    cin >> *ptr2;

    if (*ptr1>*ptr2){
        cout << *ptr1 <<" is the maximum number.";
    }
    else{
        cout << *ptr2 <<" is the maximum number.";
    }
}