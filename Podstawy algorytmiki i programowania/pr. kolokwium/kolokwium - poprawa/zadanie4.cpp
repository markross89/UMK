#include <iostream>

using namespace std;

int powerOfTwo(int a, int b);
bool isPowerOfTwo(int n);

int main()
{
    int a, b;

    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    cout << powerOfTwo(a, b) << endl;

    return 0;
}

int powerOfTwo(int a, int b)
{
    int result = 0;

    while(a<=b)
    {
        if(isPowerOfTwo(a))
        {
            result += a;
        }
        a++;
    }
    return result;
}

bool isPowerOfTwo(int n)
{
    if(n == 2)
    {
        return true;
    }
    else if(n%2 != 0)
    {
        return false;
    }
    return isPowerOfTwo(ceil(n/2));
}
