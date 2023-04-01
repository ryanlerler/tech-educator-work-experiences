#include <iostream>
#include <string>
using namespace std;

string rating(string);

int main(){
    string stars {};

    string open_file {"Welcome to Movie Reviews 123 Blog:       Movie Rating: ******"};
    stars = rating(open_file);

    cout << "The movie in this review has a " << stars << endl;

    return 0;
}


string rating(string file) {

    int pos {};
    pos = file.find("Movie Rating:");

    return file.substr(pos, 19);
}