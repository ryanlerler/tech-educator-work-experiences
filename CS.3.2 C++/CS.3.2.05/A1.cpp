#include <iostream>
using namespace std;

int main() {
    int length;
    int height;
    int width;
    int weight;
    bool asian_country {true};
    int fees {};

    cout << "What are the length, width and height of your luggage? ";
    cin >> length >> width >> height;
    cout << "What is the weight of your luggage? ";
    cin >> weight;

    if (length < 200 && height < 80 && width < 75) {
        cout << "Your luggage size is fine." << endl;
        if (weight <= 50)
            cout << "Your luggage also passes the weight test. You are good to go.";
        else {
            if (asian_country) {
                fees =  (weight-50) * 5;
                cout << "Your luggage exceeded the weight limit by " << weight-50 << ". The extra fees is $" << fees;
            }
            else {
                fees = (weight-50) * 10;
                cout << "Your luggage exceeded the weight limit by " << weight-50 << ". The extra fees is $" << fees;
            }
        }
    }
    else {
        cout << "Please change your luggage.";
    }
    return 0;
}