#include <iostream>

using namespace std;

int main(){


    int minNum = 9999;
    int n;
    int number;

    cout << "Please, enter number of numbers" << endl;
    cin >> n;

    for (int i = 0; i < n; i++){

        cout << "Please, enter a number" << endl;
        cin >> number;

            if (minNum > number){

                minNum = number;

            }

    }

    cout << "Smallest number of numbers: " << minNum << endl;



    return 0;
}

