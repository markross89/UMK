#include <iostream>

using namespace std;

int main(){


    int year;

    cout << "Please, enter a year to check if it's leap year" << endl;
    cin >> year;

    if ((year%4 == 0 && year%100 != 0) || year%400 == 0){

        cout << "it is a leap year" << endl;

    }else{

        cout << "it is not a leap year" << endl;

    }

    return 0;
}
