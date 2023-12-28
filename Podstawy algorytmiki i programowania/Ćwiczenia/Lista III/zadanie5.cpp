#include <iostream>
#include <cmath>

using namespace std;

unsigned int toDec(string num);

string toBinary(unsigned int dec);

main()
{
    string num;
    unsigned int dec;

    cout << "Please enter binary number" << endl;
    cin >> num;

    cout << "Please enter decimal number" << endl;
    cin >> dec;

    cout << "binary " << num << " : " << toDec(num) << endl;
    cout << "decimal " << dec << " : " << toBinary(dec) << endl;
    return 0;
}

unsigned int toDec(string num)
{
    int dec = 0;

    for(int i = 0; i < num.length(); i++)
    {
        dec += (num[(num.length()-1)-i] - '0') * pow(2, i);
    }
    return dec;
}

string toBinary(unsigned int dec)
{
    string num = "";

    while(dec > 0)
    {
        char digit = (dec % 2) + '0';
        num = digit + num;
        dec /= 2;
    }
    return num;
}
