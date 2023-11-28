#include <iostream>
#include <math.h>

using namespace std;

int main(){


    int a, b, c, maxNum;
    string result;

    cout << "Please, pass a value of: a" << endl;
    cin >> a;

    cout << "Please, pass a value of: b" << endl;
    cin >> b;

    cout << "Please, pass a value of: c" << endl;
    cin >> c;

    maxNum = max(a, max(b, c));

    if(maxNum == a){

        if (a < b + c){

            result = "It is a triangle";

        }else{

            result = "It is not a triangle";

        }
    }else if (maxNum == b){

         if (b < a + c){

           result = "It is a triangle";

        }else{

            result = "It is not a triangle";

        }
    }else{

         if (c < b + a){

           result = "It is a triangle";

        }else{

            result = "It is not a triangle";

        }
    }

    cout << result << endl;

    return 0;
}
