#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in_file;
    in_file.open("input.txt");

    if(!in_file){
        cerr << "Error opening file" << endl;
        return 1;
    }
    string name;
    int age;
    while(!in_file.eof()){
        in_file >> name >> age;
        cout << name << " " << age << endl; 
    }
    in_file.close();
    return 0;
}