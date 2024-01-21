#include <iostream>

using namespace std;

void printModified2DArray(int n);

int main()
{
    int n;

    cout << "Podaj liczbe naturalna n: " << endl;
    cin >> n;

    printModified2DArray(n);

    return 0;
}

void printModified2DArray(int n)
{
    int tab[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            tab[i][j] = rand()%2;
            cout << tab[i][j];
        }
        cout << endl;
    }
    cout << "========= modified 2D array ========" << endl;

    int newTab[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[i][j]==0)
            {
                if(i==0)
                {
                    if(j==0)
                    {
                        newTab[i][j] = tab[i][j+1] + tab[i+1][j];
                    }
                    else if(j==n-1)
                    {
                        newTab[i][j] = tab[i][j-1] + tab[i+1][j];
                    }
                    else
                    {
                        newTab[i][j] = tab[i][j-1] + tab[i][j+1] + tab[i+1][j];

                    }
                }
                else if(i==n-1)
                {
                    if(j==0)
                    {
                        newTab[i][j] = tab[i][j+1] + tab[i-1][j];
                    }
                    else if(j==n-1)
                    {
                        newTab[i][j] = tab[i][j-1] + tab[i-1][j];
                    }
                    else
                    {
                        newTab[i][j] = tab[i][j-1] + tab[i][j+1] + tab[i-1][j];

                    }
                }
                else
                {

                    if(j==0)
                    {
                        newTab[i][j] = tab[i][j+1] + tab[i-1][j] + tab[i+1][j];
                    }
                    else if(j==n-1)
                    {
                        newTab[i][j] = tab[i][j-1] + tab[i-1][j] + tab[i+1][j];
                    }
                    else
                    {
                        newTab[i][j] = tab[i][j-1] + tab[i][j+1] + tab[i+1][j] + tab[i-1][j];
                    }
                }
            }
            else
            {
                newTab[i][j] = 1;
            }
            cout << newTab[i][j];
        }
        cout << endl;
    }
}
