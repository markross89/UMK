#include <iostream>

using namespace std;

void printArray(int tab[], int tabSize);

main()
{
    int tab[] = {1,2,3,4,5,6,7,8,9,10};

    printArray(tab, 10);

    return 0;
}

void printArray(int tab[], int tabSize)
{
    for(int i = 0; i < tabSize; i++)
    {
        cout << tab[i] << " ";
    }
}


