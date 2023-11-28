#include <iostream>
#include <map>
#include <ctime>

using namespace std;

int main(){

    int n;
    double sum = 0;
    string word;

    cout << "Please specify number of characters" << endl;
    cin >> n;

    cout << "Please type " << n << " character word" << endl;
    cin >> word;

    map <char, int> prices;

    srand(time(0));

        for(int i = 97; i < 97 + 26; i++){

            prices[char (i)] = (rand() % 99) + 1;

            cout << char (i) << " - " << prices[char (i)] << endl;
        }

        cout << endl;

        for(char letter : word){

            sum += prices[letter];
        }

        cout << "Total cost for printing " << word << " is " << sum/100 << " PLN" << endl;

    return 0;
}
