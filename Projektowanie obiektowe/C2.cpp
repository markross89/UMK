#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string n;
    string numbers[10000];
    int counter = 0;

    while(true)
    {
        getline(cin, n);
        if(n == "-1") break;
        numbers[counter++] = n;
    }

    for(int i = 0; i < counter; i++)
    {
        if(numbers[i].substr(0,2) == "0x")
        {
            int n = stoi(numbers[i], nullptr, 16);
            cout << dec << n << endl;
        }

        else
        {
            int n = stoi(numbers[i]);
            cout << "0x" << uppercase << hex << n << endl;
        }
    }

    return 0;
}
