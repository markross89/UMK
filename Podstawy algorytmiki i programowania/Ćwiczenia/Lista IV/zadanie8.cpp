#include <iostream>

using namespace std;

void binary(int n);

int main()
{
    int n;

    cout << "Enter a number" << endl;
    cin >> n;

    binary(n);

    return 0;
}

void binary(int n)
{
    if (n == 0)
    {
        return;
    }

    binary(n/2);
    cout << n % 2;
}
