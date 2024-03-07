#include <iostream>

using namespace std;

class Cube
{
private:

    int top;
    int bottom;
    int n;
    int s;
    int w;
    int e;

public:

    Cube(int top, int e, int s)
    {
        this->top = 1;
        this->s = s;
        this->e = e;
        bottom = 7-top;
        n = 7-s;
        w = 7-e;
    }

    void moveEast()
    {
        int temp = this->top;
        this->top = this->w;
        this->w = this->bottom;
        this->bottom = this->e;
        this->e = temp;
    }

    void moveWest()
    {
        int temp = this->top;
        this->top = this->e;
        this->e = this->bottom;
        this->bottom = this->w;
        this->w = temp;
    }

    void moveNorth()
    {
        int temp = this->top;
        this->top = this->s;
        this->s = this->bottom;
        this->bottom = this->n;
        this->n = temp;
    }

    void moveSouth()
    {
        int temp = this->top;
        this->top = this->n;
        this->n = this->bottom;
        this->bottom = this->s;
        this->s = temp;
    }

    int getTop()
    {
        return this->top;
    }
};

int main()
{
    string n;
    getline(cin, n);

    Cube c(1,4,5);

    for(int i = 0; i < n.length(); i++)
    {
        if(toupper(n[i]) == 'N')
        {
            c.moveNorth();
        }
        if(toupper(n[i]) == 'S')
        {
            c.moveSouth();
        }
        if(toupper(n[i]) == 'W')
        {
            c.moveWest();
        }
        if(toupper(n[i]) == 'E')
        {
            c.moveEast();
        }
    }

    cout << c.getTop() << endl;

    return 0;
}
