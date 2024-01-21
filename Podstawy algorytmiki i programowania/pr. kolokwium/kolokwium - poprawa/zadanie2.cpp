#include <iostream>

using namespace std;

int comparePositions(string word1, string word2, int n);

int main()
{
    int n;
    string word1, word2;

    cout << "Podaj liczbe naturalna n: " << endl;
    cin >> n;

    cout << "Podaj pierwszy wyraz dlugosci n: " << endl;
    cin >> word1;

    cout << "Podaj drugi wyraz dlugosci " << n << " znaków" << endl;
    cin >> word2;

    cout << comparePositions(word1, word2, n) << endl;

    return 0;
}

int comparePositions(string word1, string word2, int n)
{
    int counter = 0;

    for(int i=0; i<n; i++)
    {
        if(tolower(word1[i]) != tolower(word2[i]))
        {
            counter++;
        }
    }
    return counter;
}
