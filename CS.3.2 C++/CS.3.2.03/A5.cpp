#include <iostream>
using namespace std;

int max_of_four(int A, int B, int C, int D)
{
    int max_value;
    max_value = A;

    if (B > max_value)
    {
        max_value = B;
    }

    if (C > max_value)
    {
        max_value = C;
    }

    if (D > max_value)
    {
        max_value = D;
    }

    return max_value;
}

int main(){
    int a, b, c, d;
    cout << "Enter 4 integer numbers separated by spaces:";
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << "The largest number is: " << ans;

    return 0;
}