#include <iostream>
using namespace std;

int main() {

    int weather_condition {};
    cout << "What is the weather condition combination today? " << endl;
    cin >> weather_condition;

    switch (weather_condition) {
        case 1: 
            cout << "Today is not raining but sunny and windy. James runs!";
            break;
        case 2:
            cout << "It is sunny even though it is raining and not windy. James runs!";
            break;
        case 3:
            cout << "It is windy even though it is raining and not sunny. James runs!";
            break;
        default:
            cout << "The weather is not ideal for James to run today.";
            break;
    }
    return 0;
}