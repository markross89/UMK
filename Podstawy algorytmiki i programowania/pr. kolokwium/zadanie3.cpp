#include <iostream>
#include <ctime>

using namespace std;

void liczbyParzysteWKolumnie(int n, int m);

int main()
{
    int n, m;

    cout << "Podaj ilosc wierszy n: ";
    cin >> n;

    cout << "Podaj ilosc kolumn m: ";
    cin >> m;

    cout << endl;

    liczbyParzysteWKolumnie(n, m);

    return 0;
}

void liczbyParzysteWKolumnie(int n, int m)
{
    int macierz[n][m];
    srand(time(0));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            macierz[i][j] = rand();
            cout << macierz[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    int kolumna = 1;
    for(int i=0; i<n; i++)
    {
        int counter = 0;
        for(int j=0; j<m; j++)
        {
            if(macierz[j][i] % 2 == 0)
            {
                counter++;
            }
        }
        cout << "kolumna " << kolumna++ << " - " << counter << endl;
    }
}
