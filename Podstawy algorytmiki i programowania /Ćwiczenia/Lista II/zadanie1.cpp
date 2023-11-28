#include <iostream>

using namespace std;

void createAndPrintReverseArray(int arraySize);

int main(){

        createAndPrintReverseArray(5);

    return 0;
}

void createAndPrintReverseArray(int arraySize){

    int number;
    int tab[arraySize];

    for(int i = 0; i < arraySize; i++){

        cout << "please pass number " << i + 1 <<  endl;
        cin >> number;

        tab[i] = number;
    }

    for(int i = arraySize - 1; i >= 0; i--){

        cout << tab[i] << endl;
    }
}
