#include <iostream>
using namespace std;

namespace foo
{
    int a = 25;
}

namespace bar
{
    int a = 50;
}

int main () {
    cout << foo::a << '\n';
    cout << bar::a << '\n';
    return 0;
}