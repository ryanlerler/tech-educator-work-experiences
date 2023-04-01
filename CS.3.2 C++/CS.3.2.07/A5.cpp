#include <iostream>
using namespace std;

void addTwoNumbers(int *sum, int num1, int num2);

int main()
{
    int num1, num2, sum;
    cout << "Input the first number : ";
    cin>>num1;
    cout << "Input the second number : ";
    cin>>num2;
     addTwoNumbers(&sum, num1, num2);

    cout<<" The sum is "<< sum;
    return 0;
}

void addTwoNumbers(int *sum, int num1, int num2)
{
    //Write your code here
    *sum = num1 + num2;
}