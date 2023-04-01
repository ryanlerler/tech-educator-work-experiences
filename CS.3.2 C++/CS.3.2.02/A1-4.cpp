#include <iostream>
using namespace std;

int main()
{
    int num {10};
    int result {0};
    
    result = num++ +10;
    cout << "result: " << result;

    return 0;
}