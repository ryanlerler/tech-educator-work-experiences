#include <iostream>
using namespace std;

int factorial (int a)
{
    if (a > 1)
     return (a * factorial (a-1));
    else
     return 1;
}

void cheers (int n)
{
    if (n <= 1)
    {
        cout << "Hurray!" << endl;
    }

    else
    {
        cout << "Hip" << endl;
        cheers(n-1);
    }
}

int main()
{
    cheers(4);
    return 0;
}