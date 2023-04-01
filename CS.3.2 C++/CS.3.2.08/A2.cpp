#include <iostream>
using namespace std;

int main(){
    int z[10];
    int m10 = 0;
    int l10 = 0;
    int even = 0;
    int odd = 0;
    int zero = 0;
    for (int i=0; i<10; i++) {
        cout << "Enter a number\n";
        cin >> z[i];

        if (z[i]>10)
            m10++;
        else
            l10++;
        if (z[i]%2==0)
            even++;
        else
            odd++;
    }
    cout << "More than 10: " << m10 << "\nLess than 10: " << l10 << "\nEven: " << even << "\nOdd: " << odd << "\n";

    }