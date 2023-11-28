#include <iostream>

using namespace std;

void turnIntoNumberAndPrintSum(string word);

int main(){

    string word;

    cout << "Please type a word" << endl;
    cin >> word;

        turnIntoNumberAndPrintSum(word);

    return 0;
}

void turnIntoNumberAndPrintSum(string word){

    int sum = 0;

    for(int i = 0; i < word.length(); i++){

        int number = (int)word[i];

        while(number > 0){

            sum += number % 10;
            number /= 10;
        }
    }
    cout << sum << endl;
}
