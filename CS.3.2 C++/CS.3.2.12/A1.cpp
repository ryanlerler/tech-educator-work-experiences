#include <iostream>
#include <string>
using namespace std;

string code {"!@#$%^&*+"};
string numbers {"123456789"};

void generator (string);

int main() {
    
    string word;
    cout << "Please input a 9 number password: " << endl;
    cin >> word;
    generator(word);

    return 0;
}

void generator(string input_word) {
    int position {};
    string password {};
    for (int i = 0; i < input_word.length(); i++) {
        position = numbers.find(input_word[i]);
        password += code[position];
    }

    cout << "Your new password has been coded into: " << password;
}