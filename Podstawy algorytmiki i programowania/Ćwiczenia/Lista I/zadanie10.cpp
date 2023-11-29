#include <iostream>

using namespace std;

int main(){


    int sum = 0;
    int n;
    int number;

    cout << "Please, enter number of numbers" << endl;
    cin >> n;

    for (int i = 0; i < n; i++){

        cout << "Please, enter a number to be added" << endl;
        cin >> number;

        sum += number;

    }

    cout << "Sum of n numbers: " << sum << endl;



    return 0;
}

