#include <iostream>

using namespace std;

int main(){


    int number;
    int factorial = 1;

    cout << "Please, enter a number" << endl;
    cin >> number;

    for (int i = 1; i < number; i++){

        factorial *= i + 1;
    }

    cout << factorial << endl;

    return 0;
}
