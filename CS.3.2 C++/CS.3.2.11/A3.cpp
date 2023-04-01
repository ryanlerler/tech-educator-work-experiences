#include <iostream>
#include <fstream>

using namespace std;

bool substring(const string &word_to_find, const string &target){
    size_t found = target.find(word_to_find);
    if(found==string::npos){
        return false;
    }else{
        return true;
    }

int main(){
    int total_words{0};
    int matched_words{0};
    string word_to_find{};
    string word_read{};

    cout << "Choose a word to find" << endl;
    cin >> word_to_find;

    while(in_file >> word_read){
        ++total_words;
        if(substring(word_to_find, word_read)){
            ++matched_words;
            cout << word_read << endl;
        }
    }
