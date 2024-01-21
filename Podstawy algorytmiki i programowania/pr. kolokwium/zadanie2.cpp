#include <iostream>

using namespace std;

void numberOfLetters(string stream);

int main()
{
    int n;
    string stream;

    cout << "Podaj ilosc wyrazow n: ";
    cin >> n;
    cin.ignore();

    cout << "Podaj zdanie skladajace sie z 'n' wyrazow odzielonych spacja: ";
    getline(cin, stream);

    numberOfLetters(stream);

    return 0;
}

void numberOfLetters(string stream)
{
    int alphabet[26] = {0};

    for(int i = 0; i < stream.length(); i++)
    {
        if(stream[i]!= ' ')
        {
            stream[i] = tolower(stream[i]);
            alphabet[(int)stream[i] - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        cout << (char)(i + 'a') << " - " << alphabet[i] << endl;
    }
}

