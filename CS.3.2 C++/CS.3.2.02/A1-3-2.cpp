#include <iostream>
using namespace std;

int main()
{
    int num {10};
    int result {0};
    
    result = num;
    cout << "result: " << result << endl;

    num = num + 1;
    cout << "num: " << num << endl;

    return 0;
}