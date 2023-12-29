#include <iostream>

using namespace std;

int occurrence(int tab[], int tabLength, int n);

main()
{
    int n;

    cout << "please give a number to search" << endl;
    cin >> n;

    int tab[5] = {6,5,9,7,7};

    cout << "occurrence of " << n << " : " << occurrence(tab, 5, n) <<  endl;

    return 0;
}

int occurrence(int tab[], int tabLength, int n)
{
    if(n == tab[tabLength - 1])
    {
        return 1 + occurrence(tab, tabLength - 1, n);
    }
    return occurrence(tab, tabLength - 1, n);
}
