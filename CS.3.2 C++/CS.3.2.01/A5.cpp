#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int base;
    cout << "Please Enter the Base Length:";
    cin >> base;

    int height;
    cout << "Please Enter the Height:";
    cin >> height;

    float area = 0.5 * base * height;

    cout << "Area of triangle = " << area << " square units.";

    return 0;
}