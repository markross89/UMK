#include <iostream>

using namespace std;

unsigned int power(unsigned int a, unsigned int b);

main()
{

    unsigned int a, b;
    char n = 'c';

    while(n != 'q')
    {

        cout << "Please enter any character to continue or 'q' to quit" << endl;
        cin >> n;

        if(n == 'q')
        {

            cout << "Exit" << endl;
            break;
        }

        cout << "Please enter number a" << endl;
        cin >> a;

        cout << "Please enter number b" << endl;
        cin >> b;

        cout << a << " to the power of " << b << " = " <<  power(a, b) << endl;

    }

    return 0;
}

unsigned int power(unsigned int a, unsigned int b)
{
    unsigned int result = a;

    if(b==0){
        return 1;
    }

    while(b > 1)
    {
        result = result*a;
        b--;
    }
    return result;
}
