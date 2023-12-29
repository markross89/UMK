#include <iostream>

using namespace std;

bool binarySearch(int tab[], int beginingIndex, int endIndex, int n);

int main()
{
    int tab[] = {1,2,2,4,5,7};

    cout << binarySearch(tab, 0, 5, 8) << endl;

    return 0;
}

bool binarySearch(int tab[], int beginingIndex, int endIndex, int n)
{
    int middleIndex = (beginingIndex + endIndex)/2;

    if (beginingIndex > endIndex)
    {
        return false;
    }
    else if (n == tab[middleIndex])
    {
        return true;
    }
    else if (n > tab[middleIndex])
    {
        return binarySearch(tab, middleIndex+1, endIndex, n);
    }
    else
    {
        return binarySearch(tab, beginingIndex, middleIndex-1, n);
    }
}
