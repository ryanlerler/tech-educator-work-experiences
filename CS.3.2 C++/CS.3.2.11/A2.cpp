#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in_file;
    in_file.open("romeo_and_juliet.txt");

    if(!in_file){
        cerr << "Error opening file" << endl;
        return 1;
    }

    int total_words{0};
    int matched_words{0};
    string word_to_find{};
    string word_read{};

    cout << "Choose a word to find" << endl;
    cin >> word_to_find;

    while(in_file >> word_read){
        ++total_words;
        if(word_read==word_to_find){
            ++matched_words;
        }
    }
    cout << word_to_find << " appears " << matched_words << " times in Romeo and Juliet." << endl;
    cout << "It is " << 100*(matched_words/double(total_words)) << "% of all words in Romeo and Juliet." << endl;

    in_file.close();
    return 0;
}