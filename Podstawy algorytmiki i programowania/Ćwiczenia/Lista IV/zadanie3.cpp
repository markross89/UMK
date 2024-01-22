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

int power(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    return a*power(a, b-1);
}
