#include <iostream>

using namespace std;

int newton(int n, int k);
int factorial(int n);

main()
{
    int n, k;

    cout << "Give n " << endl;
    cin >> n;

    cout << "Give k " << endl;
    cin >> k;

    cout << endl;

    cout << "Newton: " << newton(n, k) << endl;

    return 0;
}

int newton(int n, int k)
{
    if (k==0 || k==n)
    {
        return 1;
    }
    else if(k<0 || n<0 || n<k)
    {
        cout << "Incorrect data" << endl;
        return -1;
    }

   // return factorial(n) / (factorial(k) * factorial(n-k));
    return newton(n-1, k-1) + newton(n-1, k);
}
/*
int factorial(int n)
{
    if(n<2)
    {
        return 1;
    }
    return n*factorial(n-1);
}
*/
