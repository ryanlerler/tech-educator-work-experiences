#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in_file{"romeo_and_juliet.txt"};
    ofstream out_file{"romeo_and_juliet_output.txt", ios::app};
    if(!in_file){
        cerr << "Error opening file" << endl;
        return 1;
    }
    if(!out_file){
        cerr << "Error creating file" << endl;
        return 1;
    }

    string line;
    int line_number{0};
    while(getline(in_file, line)){
        ++line_number;
        out_file << line_number << " " << line << endl;
    }
    cout << "Done" << endl;

    in_file.close();
    out_file.close();
    return 0;
}