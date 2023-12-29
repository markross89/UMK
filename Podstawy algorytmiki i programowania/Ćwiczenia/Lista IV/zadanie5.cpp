#include <iostream>

using namespace std;

int fib(int n);

main()
{
    int n;

    cout << "please give a number" << endl;
    cin >> n;

    cout << fib(n) <<  endl;

    return 0;
}

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
