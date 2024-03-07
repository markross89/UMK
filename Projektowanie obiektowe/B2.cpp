#include <iostream>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

    int numbers[9] = {0};

    for(int i = 0; i < text.length(); i++)
    {
        int letter = toupper(text[i]) - 'A';

        if(letter > -1 && letter < 3)
        {
            numbers[0] += letter + 1;
        }
        if(letter > 2 && letter < 6)
        {
            numbers[1] += (letter-3) + 1;
        }
        if(letter > 5 && letter < 9)
        {
            numbers[2] += (letter-6) + 1;
        }
        if(letter > 8 && letter < 12)
        {
            numbers[3] += (letter-9) + 1;
        }
        if(letter > 11 && letter < 15)
        {
            numbers[4] += (letter-12) + 1;
        }
        if(letter > 14 && letter < 19)
        {
            numbers[5] += (letter-15) + 1;
        }
        if(letter > 18 && letter < 22)
        {
            numbers[6] += (letter-19) + 1;
        }
        if(letter > 21 && letter < 26)
        {
            numbers[7] += (letter-22) + 1;
        }
        if(text[i] == ' ')
        {
            numbers[8]++;
        }
    }

    for(int i = 0; i < 9; i++)
    {
        if(numbers[i] != 0 && i != 8)   cout << "[" << i + 2 << "]" << " - " << numbers[i] << endl;
        if(numbers[i] != 0 && i == 8)   cout << "[" << 0 << "]" << " - " << numbers[i] << endl;
    }

    return 0;
}
