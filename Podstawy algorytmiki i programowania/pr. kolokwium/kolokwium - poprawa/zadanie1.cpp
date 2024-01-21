#include <iostream>

using namespace std;

int removeDuplicates(int tab[], int n);

int main()
{
    int n;

    cout << "Podaj dlugosc ciagu n: ";
    cin >> n;

    int tab[n];

    int counter = 0;

    cout << "Podaj n liczb odzielonych spacja: ";
    while(counter < n)
    {
        cin >> tab[counter++];
    }

    removeDuplicates(tab, n);

    return 0;
}

int removeDuplicates(int tab[], int n)
{
    int counter = n;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(tab[i] == tab[j])
            {
                tab[j]= -1;
                counter--;
            }
        }
    }
    cout << "liczba unikatowych elementow: " << counter << endl;

    return counter;
}
