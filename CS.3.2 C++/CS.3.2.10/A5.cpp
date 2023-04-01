#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    string FirstName = "Mary ";
    string LastName = "Lee";
    string FullName = FirstName.append(LastName);
    cout << FullName << ",Length of string = " << FullName.length();

    return 0;
}