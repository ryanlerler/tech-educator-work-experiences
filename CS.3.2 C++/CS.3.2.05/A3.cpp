#include <iostream>
using namespace std;

int main() {
    int toys = 50;
    int days = 0;
    int regular_customers = 17;

    while (toys > 0) {
        while (regular_customers < 30) {
            days += 1;
            cout << "Day: " << days << endl;
            if (days % 2 == 0) {
                if (toys < 5) {
                    toys -= 1;
                }
                else {
                    toys -= 5;
                }
            }
            else {
                toys -= 1;
            }
            regular_customers += 2;
            cout << "Toys left: " << toys << " & Regular Customers: " << regular_customers << endl;

            if (toys == 0 || regular_customers > 30) {
                break;
            }
        }
    }
}