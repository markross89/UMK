
#include <iostream>

using namespace std;

int main(){

    int digit, number;
    int sum = 0;

    cout << "Please, enter a number" << endl;
    cin >> number;

    while(number > 0){

        digit = number % 10;
        number = number / 10;
        sum += digit;

    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
