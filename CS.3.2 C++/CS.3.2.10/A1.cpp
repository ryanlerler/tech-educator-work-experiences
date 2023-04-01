#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char grade;
    char c;

    cout << "What is your letter grade? " << endl;
    cin >> grade;

        
    if (isupper(grade))
        c = tolower(grade);
    else
        c = grade;

    if (c == 'a')
        cout << "Your score is 70 or above." << endl;
    else if (c == 'b')
        cout << "Your score is 60 or above." << endl;
    else if (c == 'c')
        cout << "Your score is 55 or above." << endl;
    else if (c == 'd')
        cout << "Your score is 50 or above." << endl;
    else if (c == 'e')
        cout << "Your score is 45 or above." << endl;
    else
        cout << "Your score is below 45." << endl;

    return 0;
}
