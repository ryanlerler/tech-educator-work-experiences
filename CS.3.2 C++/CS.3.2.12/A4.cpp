#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data[100];
    ofstream outfile;
    outfile.open("afile");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    outfile << data << endl;

    outfile.close();
    return 0;
}