#include <iostream>

using namespace std;

int power(int n, int p);

main()
{
    int n, p;

    cout << "please give a natural number" << endl;
    cin >> n;
    cout << "please give it's power" << endl;
    cin >> p;

    cout << n << " to the power of " << p << " = " << power(n, p) <<  endl;

    return 0;
}

int power(int n, int p){

    int result;

    if(p != 0){
        result += n*power(n, p-1);
    }else{
        return 1;
    }
    return result;
}
