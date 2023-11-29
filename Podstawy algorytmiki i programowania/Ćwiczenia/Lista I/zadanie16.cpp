
#include <iostream>

using namespace std;

int main(){

   string word;
   string palindrome = "This word is a palindrome";

   cout << "please pass a word" << endl;
   cin >> word;

   for(int i = 0; i < word.size() / 2; i++){

        if(word[i] != word[word.size() - i - 1]){

            palindrome = "This word is not a palindrome";
            break;

        }

    }

    cout << palindrome << endl;

    return 0;
}
