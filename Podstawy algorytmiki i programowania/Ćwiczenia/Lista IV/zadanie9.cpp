#include <iostream>

using namespace std;

int maxTab(int tab[], int s);

main()
{
    int tab[5] = {6,5,9,7,3};

    cout << maxTab(tab, 5) <<  endl;

    return 0;
}

int maxTab(int tab[], int s)
{
    if(s == 1)
    {
        return tab[s-1];
    }
    return max(maxTab(tab, s - 1), tab[s - 1]);
}
