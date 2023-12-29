#include <iostream>

using namespace std;

int gcd(int n, int m);


main()
{
    int n, m;

    cout << "please give a first number" << endl;
    cin >> n;

    cout << "please give a second number" << endl;
    cin >> m;

    cout << gcd(n, m) <<  endl;
      cout << 15%21 <<  endl;

    return 0;
}

int gcd(int n, int m)
{
    if(m == 0){
        return n;
    }
    return gcd(m, n % m);
}
