#include <iostream>
using namespace std;

int main() {
    bool is_sunny;
    bool is_windy;
    bool is_rainy;

    if (is_sunny == true && is_windy == true && is_rainy == false)
        cout << "James runs!";
    else if (is_sunny == true && is_rainy == true && is_windy == false)
        cout << "James runs!";
    else if (is_rainy == true && is_windy == true && is_sunny == false)
        cout << "James runs!";
    else
        cout << "James will definitely not run today!";
    return 0;
}