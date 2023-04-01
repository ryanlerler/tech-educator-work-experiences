#include <iostream>
using namespace std;

int main()
{
    string mystr;
    cout << "What is your name?" ;
    getline (cin,mystr);
    cout << "Hello " << mystr << ".\n";
    return 0;
}