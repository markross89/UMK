#include <iostream>

using namespace std;

int main(){

    int n;
    int number;

    cout << "Please, enter number of numbers" << endl;
    cin >> n;

    for (int i = 0; i < n; i++){

        cout << "Please, enter a number" << endl;
        cin >> number;

            if (number%2 == 0){

                cout << number << endl;

            }
    }

    return 0;
}

