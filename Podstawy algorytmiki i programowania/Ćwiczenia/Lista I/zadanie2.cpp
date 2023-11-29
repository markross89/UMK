#include <iostream>
#include <math.h>

using namespace std;

int main(){

/*                   FIRST OPTION
    int a;
    int b;

    cout << "Please, pass a value of: a" << endl;
    cin >> a;

    cout << "Please, pass a value of: b" << endl;
    cin >> b;

    if (a > b){

        cout << "Number 'a' is is greater" << endl;

    }else if (b > a){

        cout << "Number 'b' is greater " << endl;

    }else{

        cout << "Numbers are equal " << endl;
    }

*/

/*                    SECOND OPTION
    int a, b;
    string result;

    cout << "Please, pass a value of: a" << endl;
    cin >> a;

    cout << "Please, pass a value of: b" << endl;
    cin >> b;

    if (a==b){

        result = "Numbers are equal";

    }else{

        result = a > b ? "Number 'a' is is greater" : "Number 'b' is greater";

    }

    cout << result << endl;
*/

/*                THIRD OPTION            */

    int a, b;
    string result;

    cout << "Please, pass a value of: a" << endl;
    cin >> a;

    cout << "Please, pass a value of: b" << endl;
    cin >> b;

    if (a == b){

        result = "Numbers are equal";

    }else if (max(a, b) == a){

        result = "Number 'a' is is greater";

    }else{

        result = "Number 'b' is is greater";

    }

    cout << result << endl;

    return 0;
}
