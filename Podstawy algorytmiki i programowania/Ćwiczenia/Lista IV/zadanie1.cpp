#include <iostream>

using namespace std;

int factorial(int n);

main()
{
    int n;

    cout << "Enter a natural number" << endl;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
