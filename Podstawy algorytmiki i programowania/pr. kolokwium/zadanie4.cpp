#include <iostream>

using namespace std;

int sumaLiczbPodzielnychPrzezABC(int a, int b);

int main()
{
    int a, b;

    cout << "Podaj licze naturalna a: ";
    cin >> a;

    cout << "Podaj licze naturalna b: ";
    cin >> b;

    sumaLiczbPodzielnychPrzezABC(a, b);

    return 0;
}

int sumaLiczbPodzielnychPrzezABC(int a, int b)
{
    if(b < a)
    {
        swap(b,a);
    }
    int counter = 0;
    for(int i=a; i<=b; i++)
    {
        if(i%7 == 0 || i%8 == 0)
        {
            counter+=i;
        }
    }
    cout << counter << endl;
    return counter;
}

