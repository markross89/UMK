#include <iostream>

using namespace std;

string primeNumber(int number);

main()
{
    int number = 0;

    while(number != -1)
    {
        cout << "Please enter a number to check if it's a prime number or -1 to exit" << endl;
        cin >> number;

        if(number == -1)
        {
            cout << "Exit" << endl;
            break;
        }
        cout << primeNumber(number) << endl;
    }
    return 0;
}


string primeNumber(int number)
{
    if(number == 2)
    {
        return "it is a prime number";
    }
    else if(number < 2)
    {
        return  "it is not a prime number";
    }
    else
    {
        for(int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                return  "it is not a prime number";
            }
            return "it is a prime number";
        }
    }
}

