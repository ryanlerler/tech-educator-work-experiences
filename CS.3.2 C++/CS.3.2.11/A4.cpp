#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream out_file{"output.txt", ios::app};
    if(!out_file){
        cerr << "Error creating file" << endl;
    }

    string input;
    cout << "Write something to the file: ";
    getline(cin,input);
    out_file << input << endl;

    out_file.close();
    return 0;
}