#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int radius;
    cout << "Please Enter the Radius:";
    cin >> radius;

    float area = 3.14 * radius * radius;

    cout << "Area of circle = " << area << " square units.";

    return 0;
}