#include <iostream>
using namespace std;

int main(){
    int num1=200;
    int num2=100;

    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num2;

    cout << "p1==p2: " << (p1==p2) << endl;
    cout << "p2==p3: " << (p2==p3) << endl;
    cout << "p2!=p3: " << (p2!=p3) << endl;
    cout << "p3!=nullptr: " << (p3!=nullptr) << endl;

}