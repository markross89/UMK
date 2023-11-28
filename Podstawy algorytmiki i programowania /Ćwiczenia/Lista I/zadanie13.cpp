#include <iostream>

using namespace std;

int main(){

    int digit;
    int number;

    cout << "Please, enter a number" << endl;
    cin >> number;

    while(number > 0){

        digit = number % 10;
        number = number / 10;

        cout << digit << endl;

    }

    return 0;
}

