#include <iostream>
using namespace std;

int main()
{
    int num {10};

    num = num + 1;
    cout << "num: " << num << endl;

    num += 1;
    cout << "num: " << num << endl;

    num++;
    cout << "num: " << num << endl;

    ++num;
    cout << "num: " << num << endl;

    return 0;
}