#include <iostream>

using namespace std;

bool linearSearch(int tab[], int tabLength, int n);

main()
{
    int n;

    cout << "please give a number to search" << endl;
    cin >> n;

    int tab[5] = {6,5,9,7,3};

    cout << "1 if element exist, 0 if not: " <<  linearSearch(tab, 5, n) <<  endl;

    return 0;
}

bool linearSearch(int tab[], int tabLength, int n)
{
    if(n == tab[tabLength - 1])
    {
        return true;
    }
    else if (tabLength == 0)
    {
        return false;
    }
    return linearSearch(tab, tabLength - 1, n);
}
