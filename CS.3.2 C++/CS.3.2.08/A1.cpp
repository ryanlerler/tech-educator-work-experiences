#include <iostream>
using namespace std;

//Activity 1 - Arrays in C++
int main()
{
    int roboto1[3] = {};
    for (int i = 0; i < 3; i++)
    {
        cout << roboto1[i];
        cout << "\n";
    }

    cout << "\n";

    int roboto2[3] = {5, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        cout << roboto2[i];
        cout << "\n";
    }

    cout << "\n";

    int roboto3[] = {3,3};
    for (int i = 0; i < 2; i++)
    {
        cout << roboto3[i];
        cout << "\n";
    }

    return 0;
}