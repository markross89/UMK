#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Room
{
    private:

        double a;
        double b;
        double c;

    public:

        Room(double a, double b, double c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        double getR()
        {
            double half = (a+b+c)/2;
            double r = sqrt(((half - a)*(half - b)*(half - c))/half);
            return r;
        }
};

int main()
{

    double a, b, c;


    while(cin >> a)
    {
        cin >> b >> c;
        Room r = Room(a, b, c);
        cout << "Promien okraglego stolu wynosi: " << fixed << setprecision(3) << r.getR() << endl;
    }


    return 0;
}
