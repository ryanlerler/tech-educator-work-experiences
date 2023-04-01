#include <iostream>
using namespace std;

void latecomer (int tv_time, bool sleep) {
    if (tv_time > 5 && sleep == true)
        cout << "This student will be a latecomer." << endl;
    else {
        cout << "This student will not be a latecomer." << endl;
    }
}

void gets_ill (int temperature, bool talks) {
    if (temperature > 37 && talks == false)
        cout << "This student will take mc." << endl;
    else
        cout << "This student wil not take mc." << endl;
}

int main() {
    latecomer(2, false);
    gets_ill(36, false);

    return 0;
}