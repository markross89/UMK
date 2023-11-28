#include <iostream>

using namespace std;

int main(){


    int a;
    int b;
    int c;

    cout << "Please, pass a value of: a" << endl;
    cin >> a;

    cout << "Please, pass a value of: b" << endl;
    cin >> b;

    cout << "Please, pass a value of: c" << endl;
    cin >> c;

    if(a < b){

        if (a < c){

            cout << "Smallest number is a-" << a << endl;

        }else{

            cout << "Smallest number is c-" << c << endl;

        }

    }else if(b < a){

        if (b < c){

            cout << "Smallest number is b-" << b << endl;

        }else{

            cout << "Smallest number is c-" << c << endl;

        }


/*               SECOND OPTION MORE SECURE AND COMPLEX

    if (a == b){
        if (c == a) {

            cout << "All numbers are equal" << endl;

        }else if (c < a){

            cout << "Smallest number is c-" << c << endl;

        }else{

            cout << "Smallest numbers are a-" << a << "and b-" << b << endl;

        }
    } else if (a == c){

           if (b == a) {

            cout << "All numbers are equal" << endl;

        }else if (b < a){

            cout << "Smallest number is b-" << b << endl;

        }else{

            cout << "Smallest numbers are a-" << a << "and c-" << c << endl;

        }
    }else if (b == c){

           if (a == b) {

            cout << "All numbers are equal" << endl;

        }else if (a < b){

            cout << "Smallest number is a-" << a << endl;

        }else{

            cout << "Smallest numbers are b-" << b << "and c-" << c << endl;

        }
    }else if(a < b){

        if (a < c){

            cout << "Smallest number is a-" << a << endl;

        }else{

            cout << "Smallest number is c-" << c << endl;

        }

    }else if(b < a){

        if (b < c){

            cout << "Smallest number is b-" << b << endl;

        }else{

            cout << "Smallest number is c-" << c << endl;

        }

    }
*/


    return 0;
}
