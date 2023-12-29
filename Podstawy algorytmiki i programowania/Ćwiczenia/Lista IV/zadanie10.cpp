#include <iostream>

using namespace std;

bool linearSearch(int tab[], int s, int z);

main()
{
    int z;

    cout << "please give a number to search" << endl;
    cin >> z;

    int tab[5] = {6,5,9,7,3};

    cout << "1 if element exist, 0 if not: " <<  linearSearch(tab, 5, z) <<  endl;

    return 0;
}
bool linearSearch(int tab[], int s, int z)
{
    if(z == tab[s - 1])
    {
        return true;
    }else if (s == 0){
        return false;
    }
    return linearSearch(tab, s - 1, z);

}
