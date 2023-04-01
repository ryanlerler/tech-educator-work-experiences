#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int length;
    cout << "Please Enter the Length:";
    cin >> length;

    int width;
    cout << "Please Enter the Width:";
    cin >> width;

    float area = length * width;

    cout << "Area of rectangle = " << area << " square units.";

    return 0;
}