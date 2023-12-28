#include <iostream>

using namespace std;

double sum(int firstDimension, int secondDimension, double tab[][3]);

int main()
{
    double tab[3][3] = {{1, 2.5, 3.2}, {4, 5.1, 6.3}, {7, 8.9, 9}};

    cout << "Sum: " << sum(3, 3, tab) << endl;

    return 0;
}

double sum(int firstDimension, int secondDimension, double tab[][3])
{
    double sum=0;

    for(int i=0; i<firstDimension; i++)
    {
        for(int j=0; j<secondDimension; j++)
        {
            sum += tab[i][j];
        }
    }
    return sum;
}
