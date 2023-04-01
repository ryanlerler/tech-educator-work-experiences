#include <iostream>
using namespace std;

int main() {

    int age;
    int height;
    bool parental_consent;

    if (age > 7 && height > 130 || age < 8 && height > 130 && parental_consent == true)
        cout << "Yes, you may ride!";
    else
        cout << "No, please come again another time!";

    return 0;
}