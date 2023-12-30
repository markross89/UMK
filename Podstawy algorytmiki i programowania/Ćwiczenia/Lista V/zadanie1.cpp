#include <iostream>
#include <cmath>
#include <ctime>
#include <fstream>

using namespace std;

struct triangle
{
    int a, b, c;
};

struct maxAndMinTriangle
{
    triangle maxT, minT;
};

void printTriangle(triangle t);
int perimiter(triangle t);
bool isIsosceles(triangle t);
bool isTirangle(triangle t);
double area(triangle t);
triangle randomTriangle();
void addTriangle(triangle t, string filename);
int readFromFile(triangle tab[], string filename);
triangle findMinCirc(triangle tab[], int n);
triangle findMaxCirc(triangle tab[], int n);
maxAndMinTriangle findMaxAndMinCirc(triangle tab[], int tabSize);
void sortTrianglesByArea(triangle tab[], int tabSize);
void printTrianglesArea(triangle tab[], int tabSize);

int main()
{
    srand(time(NULL));

    triangle t1 = {5, 6, 4}, t2 = {1, 2};

    printTriangle(t1);
    printTriangle(t2);

    cout << "perimiter : "<< perimiter(t1) << endl;
    cout << "Isosceles (1 for Yes, 0 for No) : "<< isIsosceles(t1) << endl;
    cout << "Triangle (1 for Yes, 0 for No) : " << isTirangle(t1) << endl;
    cout << "Area : " << area(t1) << endl;

    printTriangle(randomTriangle());
    addTriangle(randomTriangle(), "triangle.txt");

    triangle tab[100];
    int tabSize = readFromFile(tab, "triangle.txt");
    printTriangle(tab[0]);

    cout << "Triangle with minimal perimiter is : " ;
    printTriangle(findMinCirc(tab, tabSize));

    cout << "Triangle with maximal perimiter is : " ;
    printTriangle(findMaxCirc(tab, tabSize));

    printTriangle(findMaxAndMinCirc(tab, tabSize).maxT);
    printTriangle(findMaxAndMinCirc(tab, tabSize).minT);

    printTrianglesArea(tab, tabSize);

    sortTrianglesByArea(tab, tabSize);

    printTrianglesArea(tab, tabSize);

    return 0;
}

void printTriangle(triangle t)
{
    cout << "Triangle abc : " << t.a << " " << t.b << " " << t.c << endl;
}

int perimiter(triangle t)
{
    return t.a + t.b + t.c;
}

bool isIsosceles(triangle t)
{
    return (t.a == t.b || t.a == t.c || t.b == t.c);
}

bool isTirangle(triangle t)
{

    return t.a + t.b > t.c && t.a + t.c > t.b && t.b + t.c > t.a;
}

double area(triangle t)
{
    double p = (t.a+t.b+t.c)/2.0;
    return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
}

triangle randomTriangle()
{
    triangle t = {rand() % 100 +1, rand() % 100 +1, rand() % 100 +1};

    while(!isTirangle(t))
    {
        t = {rand() % 100 +1, rand() % 100 +1, rand() % 100 +1};
    }
    return t;
}

void addTriangle(triangle t, string fileName)
{
    ofstream file(fileName, ios::app);  // ofstream file(filename, ios::app);    - if you want to append text to file, not overwrite it
    file << t.a << " " << t.b << " " << t.c << endl;
    file.close();
}

int readFromFile(triangle tab[], string fileName)
{
    ifstream file(fileName);

    int counter = 0;

    while(file >> tab[counter].a && !file.eof())   // najpierw wczytujemy a potem sprawdzamy czy juz jest koniec lini
    {
        file >> tab[counter].b >> tab[counter].c;
        counter++;
    }

    file.close();
    return counter;
}

triangle findMinCirc(triangle tab[], int tabSize)
{
    triangle minCir  = tab[0];

    for(int i = 0; i < tabSize-1; i++)
    {
        if(perimiter(tab[i+1]) < perimiter(minCir))
        {
            minCir = tab[i+1];
        }
    }
    return minCir;
}

triangle findMaxCirc(triangle tab[], int tabSize)
{
    triangle maxCir  = tab[0];

    for(int i = 0; i < tabSize-1; i++)
    {
        if(perimiter(tab[i+1]) > perimiter(maxCir))
        {
            maxCir = tab[i+1];
        }
    }
    return maxCir;
}

maxAndMinTriangle findMaxAndMinCirc(triangle tab[], int tabSize)
{
    return maxAndMinTriangle{findMaxCirc(tab, tabSize), findMinCirc(tab, tabSize)};
}

void sortTrianglesByArea(triangle tab[], int tabSize)
{
    for (int j = 0; j < tabSize; j++)
    {
        for (int i = 0; i < tabSize - 1; i++)
        {
            if(area(tab[i+1]) < area(tab[i]))
            {
                swap(tab[i+1], tab[i]);
            }
        }
    }
}

void printTrianglesArea(triangle tab[], int tabSize)
{
    for (int i = 0; i < tabSize; i++)
    {
        cout << area(tab[i]) << " - ";
    }
    cout << endl;
}
