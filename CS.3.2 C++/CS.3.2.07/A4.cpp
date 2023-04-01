#include <iostream>
using namespace std;

void square(int *pNumber){
    cout << "In square(): " << pNumber << endl;
    *pNumber *= *pNumber;
}

int main(){
    int number = 8;
    cout << "In main(): " << &number << endl;
    cout << number << '\n' << endl;
    square(&number);
    cout << number << endl;
}