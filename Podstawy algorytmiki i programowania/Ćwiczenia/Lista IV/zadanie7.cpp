#include <iostream>

using namespace std;

int nrOfDigits(int n);

main()
{
    int n;

    cout << "please give a number" << endl;
    cin >> n;

    cout << nrOfDigits(n) <<  endl;

    return 0;
}

int nrOfDigits(int n)
{
    if(n < 10)
    {
        return 1;
    }
    return 1 + nrOfDigits(n /10);
}
