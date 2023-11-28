#include <iostream>

using namespace std;

int main(){


    int number;
    int sum = 0;

    cout << "Please, enter value of a" << endl;
    cin >> number;

    for (int i = 1; i < number; i++){

        if (number%i == 0){

            sum += i;
        }

    }

    if (sum == number && sum != 0){

        cout << "it is a perfect number" << endl;

    }else{

        cout << " it is not a perfect number" << endl;

    }

    return 0;
}

