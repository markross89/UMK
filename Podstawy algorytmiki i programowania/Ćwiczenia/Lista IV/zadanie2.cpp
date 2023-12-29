#include <iostream>

using namespace std;

void printAsc(int n);
void printDes(int n);

main()
{
    int n;

    cout << "please give a natural number" << endl;
    cin >> n;

    printAsc(n);
    cout << endl;
    printDes(n);

    return 0;
}

void printAsc(int n)
{
    if(n <= 0)
    {
        return;
    }
    printAsc(n-1);
    cout << n << " ";
    return  ;
}

void printDes(int n)
{
    if(n <= 0)
    {
        return;
    }
    cout << n << " ";
    printDes(n-1);
}
