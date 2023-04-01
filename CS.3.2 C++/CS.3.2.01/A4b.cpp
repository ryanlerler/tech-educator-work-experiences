#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;
    cout << "Please Enter Your Full Name:";
    getline(cin,fullname);

    int YOB;
    cout << "Please Enter Your Year of Birth:";
    cin >> YOB;

    int age = 2022 - YOB;
    //Edit based on the current year!

    cout << fullname << " is " << age << " years old.";

    return 0;
}