
#include <iostream>

using namespace std;

int main(){

    int digit, number;
    int newNumber = 0;
    int counter = 0;

    cout << "Please, enter a number" << endl;
    cin >> number;

    int tempNumber = number;

    while(tempNumber > 0){

        tempNumber = tempNumber / 10;

        if (counter == 0){

            counter = 1;

        }else{

            counter *= 10;
        }

    }

     while(number > 0){

        digit = number % 10;
        number = number / 10;
        newNumber += digit * counter;
        counter /= 10;

    }

    cout << "Revers of th number: " << newNumber << endl;

    return 0;
}
