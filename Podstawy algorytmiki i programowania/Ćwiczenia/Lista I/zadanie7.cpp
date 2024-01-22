#include <iostream>

using namespace std;

int main(){

    int a, b;

    cout << "Please, enter value of a" << endl;
    cin >> a;

    cout << "Please, enter value of b" << endl;
    cin >> b;

    int power = a;

    for (int i = 1; i < b; i++){

        power *= a;

    }

    cout << power << endl;

    return 0;
}
