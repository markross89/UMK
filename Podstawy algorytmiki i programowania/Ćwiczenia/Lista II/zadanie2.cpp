#include <iostream>

using namespace std;

void sumAndAvg(int arraySize);

int main(){

    int number;

    cout << "Please give a number between 1 and 10 inclusive" << endl;
    cin >> number;

        sumAndAvg(number);

    return 0;
}

void sumAndAvg(int arraySize){

    double number;
    double tab[arraySize];
    double sum = 0;

    for(int i = 0; i < arraySize; i++){

        cout << "please pass number " << i + 1 <<  endl;
        cin >> number;

        tab[i] = number;
        sum += number;
    }

    cout << "Sum of all numbers: " << sum << endl;
    cout << "Average of all numbers: " << sum/arraySize << endl;
}
