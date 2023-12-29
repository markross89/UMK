#include <iostream>

using namespace std;

long ackermann(long m, long n);

main()
{
    long n, m;

    cout << "please give first number" << endl;
    cin >> m;
    cout << "please give it's power" << endl;
    cin >> n;

    cout << ackermann(m, n) <<  endl;

    return 0;
}

long ackermann(long m, long n)
{
    if(m == 0)
    {
        return n + 1;
    }
    if (m > 0 && n == 0)
    {
        return ackermann(m-1, 1);
    }
    return ackermann(m-1, ackermann(m, n-1));
}
