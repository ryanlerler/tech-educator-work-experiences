#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    switch (x)
    {   
    case 1:
        cout << "x is 1";
        break;
    case 2:
        cout << "x is 2";
        break;
    default:
        cout << "value of x unknown";
    }
    return 0;
}