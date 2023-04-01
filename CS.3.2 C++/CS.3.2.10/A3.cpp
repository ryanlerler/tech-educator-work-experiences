#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    char FirstName[6] = "Mary ";
    char LastName[4] = "Lee";
    strcat(FirstName, LastName);
    cout << FirstName << ", Length of string = " << strlen(FirstName);

    return 0;
}
