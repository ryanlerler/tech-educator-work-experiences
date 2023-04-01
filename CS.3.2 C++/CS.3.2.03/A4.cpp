#include <iostream>
using namespace std;

void leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 !=0) or (year % 400 == 0))
    {
        cout << "This is a Leap Year!";
    }

    else
    {
        cout << "This is NOT a Leap Year!";
    }
}

int main()
{
    cout << "Enter a year:";
    int year_input;
    cin >> year_input;
    leap_year(year_input);
    return 0;
}