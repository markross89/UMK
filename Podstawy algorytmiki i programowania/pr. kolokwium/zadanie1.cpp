#include <iostream>
#include <cstring>

using namespace std;

int checkSimilarities(int stream1[], int stream2[], int n);

int main()
{
    int n;

    cout << "Podaj ilosc wartosci liczbowych n: ";
    cin >> n;

    int stream1[n-1];
    int stream2[n-1];

    int countStram1 = 0;
    int countStram2 = 0;

    cout << "Podaj pierwszy ciag znakow dlugosci n, odzielonych spacja: ";
    while(countStram1 < n)
    {
        cin >> stream1[countStram1];
        countStram1++;
    }

    cout << "Podaj drugi ciag znakow dlugosci n, odzielonych spacja: ";
    while(countStram2 < n)
    {
        cin >> stream2[countStram2];
        countStram2++;
    }

    checkSimilarities(stream1, stream2, n);

    return 0;
}

int checkSimilarities(int stream1[], int stream2[], int n)
{
    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(stream1[i]==stream2[j])
            {
                counter++;
            }
        }
    }
    cout << "Number of matching elements: " << counter << endl;

    return counter;
}
