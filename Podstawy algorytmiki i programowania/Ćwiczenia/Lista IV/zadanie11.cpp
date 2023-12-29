#include <iostream>

using namespace std;

int occurrence(int tab[], int s, int z);

main()
{
    int z;

    cout << "please give a number to search" << endl;
    cin >> z;

    int tab[5] = {6,5,9,7,7};

    cout << "occurrence of " << z << " : " << occurrence(tab, 5, z) <<  endl;

    return 0;
}
int occurrence(int tab[], int s, int z)
{
    if(z == tab[s - 1])
    {
        return 1 + occurrence(tab, s - 1, z);
    }
    return occurrence(tab, s - 1, z);
}
