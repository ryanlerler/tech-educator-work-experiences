#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 8; ++i) {
        if (i == 6) {
            cout << "We are not using indigo!" << endl;
            continue;
        }
        cout << "Now it's time to use rainbow colour palette " << i << endl;
    }

    return 0;
}