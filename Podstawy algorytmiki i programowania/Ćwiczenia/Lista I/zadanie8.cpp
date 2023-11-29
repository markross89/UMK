#include <iostream>

using namespace std;

int main(){


    int a;
    string prime = "this number is a prime number";

    cout << "Please, enter value of a" << endl;
    cin >> a;

    for (int i = 2; i < a; i++){

        if (a%i == 0){

            prime = "this number is not a prime number";
            break;
        }

    }

    cout << prime <<  endl;

    return 0;
}

