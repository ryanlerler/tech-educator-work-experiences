#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;
    cout << "Please Enter Your Full Name:";
    getline(cin,fullname);

    int age;
    cout << "Please Enter Your Age:";
    cin >> age;

    cout << fullname << " is " << age << " years old.";

    return 0;
}