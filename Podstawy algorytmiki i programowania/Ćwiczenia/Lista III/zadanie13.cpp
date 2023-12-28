#include <iostream>

using namespace std;

void anagram(string word1, string word2);

main()
{
    string word1, word2;

    while(true)
    {
        cout << "Please give first word or q to quit" << endl;
        cin >> word1;

        if(word1=="q"){
            break;
        }

        cout << "Please give second word" << endl;
        cin >> word2;

        anagram(word1, word2);
    }

    return 0;
}
void anagram(string word1, string word2)
{
    bool comparison;
    bool gotoFlagMain = false;

    for (int i = 0; i < word1.length() && gotoFlagMain == false; i++)
    {
        for (int j = 0; j < word2.length(); j++)
        {
            if(word1[i] == word2[j])
            {
                comparison = true;
                break;
            }
            else
            {
                comparison = false;
            }
        }
        if(!comparison)
        {
            gotoFlagMain = true;
        }
    }
    for (int i = 0; i < word2.length() && gotoFlagMain == false; i++)
    {
        for (int j = 0; j < word1.length(); j++)
        {
            if(word2[i] == word1[j])
            {
                comparison = true;
                break;
            }
            else
            {
                comparison = false;
            }
        }
        if(!comparison)
        {
            gotoFlagMain = true;
        }
    }
    cout << "1 - Anagram | 0 - Not an anagram: " << comparison << endl;
}
/*
void anagram(string word1, string word2)
{
    int word1LetterCount[26] = {};
    int word2LetterCount[26] = {};
    string result = "Those words are anagrams";

    for (int i = 0; i < word1.length(); i++)
    {
        word1LetterCount[word1[i] - 'a']++;
    }
    for (int i = 0; i < word2.length(); i++)
    {
        word2LetterCount[word2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(word1LetterCount[i] != word2LetterCount[i])
        {
            result = "Those words are not anagrams";
            break;
        }
    }
    cout << result << endl;
}
*/
