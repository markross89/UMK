#include <iostream>
#include <string>

using namespace std;

unsigned int toDec(string num);
string toHex(unsigned int dec);
int power(int a, int b);

main()
{
    string hex;
    int dec;

    cout << "Please enter Hex number " << endl;
    cin >> hex;

    cout << "Please enter Decimal number " << endl;
    cin >> dec;

    cout << toDec(hex) << endl;
    cout << toHex(dec) << endl;

    return 0;
}

unsigned int toDec(string num)
{
    int decimal = 0;

    for(int i = num.length()-1; i >= 0; i--)
    {
        if(num[i]-'0' < 10)
        {
            decimal += (num[i]-'0') * power(16, num.length()-i-1);
        }
        else
        {
            decimal += (num[i]+10-'A') * power(16, num.length()-i-1);
        }
    }
    return decimal;
}

string toHex(unsigned int dec)
{
    string hex = "";
    char digit;

    while(dec > 0)
    {
        if(dec % 16 < 10)
        {
            hex = (char)((dec % 16) + '0') + hex;
        }
        else
        {
            hex = (char)((dec % 16) - 10 + 'A') + hex;
        }
        dec /= 16;
    }
    return hex;
}

int power(int a, int b)
{
    int result = 1;

    for(int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
