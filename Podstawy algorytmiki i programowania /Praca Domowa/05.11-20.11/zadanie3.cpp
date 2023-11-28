#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;

    cout << "Please give the upper limit of the number range" << endl;
    cin >> n;

    int permutationTab[n];
    int elementTab[n];
    int newTab[n];

    for(int i = 0; i < n; i++){

        int index;
        int number;

        cout << "please give a uniqe number between 1 and " << n << ", that will work as an index" << endl;
        cin >> index;
        cout << "Please give a integer number coresponding with an index: " << index << endl;
        cin >> number;

        permutationTab[i] = index;
        elementTab[i] = number;
    }

    cout << "permutation: ";

    for(int i = 0; i < n; i++){

        cout << permutationTab[i] << "  ";
    }

    cout << endl;

    cout << "numbers:      ";

     for(int i = 0; i < n; i++){

        cout << elementTab[i] << "  ";
    }

    cout << endl;

    cout << "ordered numbers: ";

    for(int i = 0; i < n; i++){

      newTab[permutationTab[i] - 1] = elementTab[i];
    }

       for(int i = 0; i < n; i++){

        cout << newTab[i] << "  ";
    }

    return 0;
}
