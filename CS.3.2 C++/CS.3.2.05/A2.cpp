#include <iostream>
using namespace std;

int main() {
    int rows_columns;
    cout << "Please specify the number of rows and columns for your pattern: " << endl;
    cin >> rows_columns;

    for (int i = 0; i < rows_columns; i++) {
        for (int j = 0; j < rows_columns; j++) {
            if (i % 2 == 0 || j % 2 == 0)
                cout << "* ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}