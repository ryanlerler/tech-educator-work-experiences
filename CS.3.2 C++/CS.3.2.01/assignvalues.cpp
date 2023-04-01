#include <iostream>
using namespace std;

int main(){

    int num1 {10};
    int num2 {20};

    num1 = 100;
    cout << "num1 is: " << num1 << endl;

    num1 = num2;
    cout << "num1 is: " << num1 << endl;

    return 0;
}