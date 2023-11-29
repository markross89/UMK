#include <iostream>

using namespace std;

void assignAscii(string word);

int main(){

    string word;

    cout << "Please type a word" << endl;
    cin >> word;

        assignAscii(word);

    return 0;
}

void assignAscii(string word){

    for(int i = 0; i < word.length(); i++){

        cout << word[i] << " - " << (int)word[i] << endl;
    }
}
