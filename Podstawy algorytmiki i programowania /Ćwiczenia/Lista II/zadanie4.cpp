#include <iostream>

using namespace std;

void checkIfPalindrome(string word);

int main(){

    string word;

    cout << "Please type a word to check if it's a palindrome" << endl;
    cin >> word;

        checkIfPalindrome(word);

    return 0;
}

void checkIfPalindrome(string word){

    string palindrome = "this word is a palindrome";

    for(int i = 0; i < word.length(); i++){

        if(word[i] != word[(word.length() - i) - 1]){

            palindrome = "this word is not a palindrome";
            break;
        }
    }

    cout << palindrome << endl;
}
