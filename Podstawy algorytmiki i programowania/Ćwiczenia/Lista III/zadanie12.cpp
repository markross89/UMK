#include <iostream>

using namespace std;

void countLetters(string word);

main()
{
    string word;

    cout << "Please give a word" << endl;
    cin >> word;

    countLetters(word);

    return 0;
}

void countLetters(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        int occurence = 0;

        for (int j = 0; j < word.length(); j++)
        {
            if(word[i] == word[j])
            {
                occurence++;
            }
        }

        if(word[i] == word[i+1])
        {
            continue;
        }
        cout << word[i] << " - " << occurence << endl;
    }
}
