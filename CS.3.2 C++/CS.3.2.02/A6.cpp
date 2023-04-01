#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 10)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << i << "x" << j << " = " << (i * j) << endl;
        }

        i++;
    }
    return 0;
}