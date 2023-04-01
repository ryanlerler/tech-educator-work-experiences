#include <iostream>
using namespace std;

int main()
{
    int num {10};
    int result {0};
    
    cout << "num: " << num << endl;

    result = num++;
    cout << "num: " << num << endl;
    cout << "result: " << result << endl;

    return 0;
}