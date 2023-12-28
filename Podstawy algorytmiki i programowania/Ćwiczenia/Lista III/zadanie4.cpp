#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n);

string primeNumber(int number);

unsigned int power(unsigned int a, unsigned int b);

int main()
{
    int n = 0;

    while(n != -1){

        cout << "Please select a program by typing it's number: FACTORIAL = 1 PRIME = 2 POWER = 3 EXIT = 4" << endl;
        cin >> n;

        switch(n){

        case 1:

            unsigned int number;

            cout << "Please enter a number to calculate factorial: " << endl;
            cin >> number;

            cout << number << "! = " << factorial(number) << endl;
            break;

          case 2:

            int temp;

            cout << "Please enter a number to check if it's prime: " << endl;
            cin >> temp;

            cout << primeNumber(temp) << endl;
            break;

          case 3:

            unsigned int number1, number2;

            cout << "Please enter a number to calculate it's power: " << endl;
            cin >> number1;

            cout << "Please enter value of power: " << endl;
            cin >> number2;

            cout << number1 << " to the power of " << number2 << " = " << power(number1, number2) << endl;
            break;

          case 4:

            cout << "EXIT" << endl;
            n = -1;
            break;

          default:

            cout << "Sorry, but it looks like you have entered wrong data. Enter number representing program you want to use" << endl;
            break;
        }
    }
    return 0;
}

unsigned int factorial(unsigned int number)
{
    int result = 1;

    for(int i=2; i<=number; i++)

    {
        result = result*i;
    }

    return result;
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
