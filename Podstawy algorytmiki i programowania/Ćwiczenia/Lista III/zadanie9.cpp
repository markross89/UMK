#include <iostream>

using namespace std;

void printArray(int tab[], int tabSize);
int linearSearch(int length, int tab[], int num);

main()
{
    int number;

    int tab[] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Please give a number to search for it's position in array. If -1 is returned, number is not present in the array" << endl;
    cin >> number;

    cout << "position of " << number << " is " << linearSearch(10, tab, number) << endl;

    return 0;
}

void printArray(int tab[], int tabSize)
{
    for(int i = 0; i < tabSize; i++)
    {
        cout << tab[i] << " ";
    }
}
int linearSearch(int length, int tab[], int num)
{
    for(int i = 0; i < length; i++)
    {
        if (num == tab[i])
        {
            return i;
        }
    }
    return -1;
}
