#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n);

int main()
{
    unsigned int number = 0;

    while(number != -1)
    {
        cout << "Please give a natural number to get factorial or -1 to quit" << endl;
        cin >> number;

        if(number == -1)
        {
            cout << "exit" << endl;
            break;
        }
        cout << number << "! = " << factorial(number) << endl;
    }
    return 0;
}

unsigned int factorial(unsigned int number)
{
    if (number < 2)
    {
        return 1;
    }
    return number * factorial(number-1);
}
