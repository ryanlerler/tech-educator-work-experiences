#include <iostream>
using namespace std;

int main() {
    bool is_sunny;
    bool is_windy;
    bool is_rainy;

    if (is_sunny == true && is_windy == true && is_rainy == true)
        cout << "James will definitely not run today!";
    else
        cout << "James runs!";
    return 0;
}