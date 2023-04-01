#include <iostream>
using namespace std;

int main() {

    int amir {};
    int dad {};
    int day {};
    int total_amount {};

    while (day < 10) {
        day++;
        amir += 5;
        dad += day;
        total_amount = amir + dad;
    }

    cout << "The total amount of the 10th day is " << total_amount << endl;
    return 0;
}