#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 2 numbers in separate lines:\n";
    cout << "The 1st number should be smaller than the 2nd.\n";

    int smaller_number;
    int larger_number;

    cin >> smaller_number >> larger_number;

    for(int i = smaller_number; i < larger_number + 1; i++)
    {
        if (i % 9 == 0) // checking multiples of 9
        {
            break;
        }
        else if (i % 6 == 0) // checking multiples of 6
        {
            continue;
        }
        else if (i % 2 == 0) // checking even
        {
            cout << i << ": even" << endl;
        }
        else // checking odd
        {
            cout << i << ": odd" << endl;
        }
    }
    return 0;
}