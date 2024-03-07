#include <iostream>

using namespace std;

int main()
{
    int quantity;
    cin >> quantity;

    int numbers[quantity];
    int counter = 0;

    while(counter < quantity) cin >> numbers[counter++];

    for(int n:numbers)
    {
        int result = 1;

        for (int i = 2; i < n; i++)
        {
            if(n%i == 0 && n/i >= i)
            {
                if(n/i == i) result += i;
                else result += (n/i + i);
            }
        }
        if(result < n) cout << n << " - " << "liczba nadmiarowa" << endl;
        else if(result > n) cout << n << " - " << "liczba deficytowa" << endl;
        else cout << n << " - " << "liczba doskonala" << endl;
    }

    return 0;
}
