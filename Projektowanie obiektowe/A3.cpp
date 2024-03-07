#include <iostream>

using namespace std;

int main()
{
    int eggs;
    int kopa;
    int tuzin;
    int reszta;

    cin >> eggs;

    kopa = eggs / 60;
    tuzin = (eggs % 60) / 12;
    reszta = ((eggs % 60) % 12) ;

    cout << kopa << ", " << tuzin << ", " << reszta << endl;

    return 0;
}
