#include <iostream>

using namespace std;

unsigned int toDec(string num, unsigned int baseSys);

string fromDec(unsigned int dec, unsigned int finalSys);

int power(int a, int b);

main()
{
    string num;
    unsigned int startSys, finalSys, dec;

    cout << "Please enter number in system [2, 10]" << endl;
    cin >> num;

    cout << "Please enter base system of entered number" << endl;
    cin >> startSys;

    cout << "Please enter expected system" << endl;
    cin >> finalSys;

    dec = toDec(num, startSys);

    cout <<  "result: "<< fromDec(dec, finalSys) << endl;
    return 0;
}

unsigned int toDec(string num, unsigned int baseSys)
{
    int dec = 0;

    for(int i = 0; i < num.length(); i++)
    {
        dec += (num[(num.length()-1)-i] - '0') * power(baseSys, i);
    }
    return dec;
}

string fromDec(unsigned int dec, unsigned int finalSys)
{
    string num = "";

    while(dec > 0)
    {
        char digit = (dec % finalSys) + '0';
        num = digit + num;
        dec /= finalSys;
    }
    return num;
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
