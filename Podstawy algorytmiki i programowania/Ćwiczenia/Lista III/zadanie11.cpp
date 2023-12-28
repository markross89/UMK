#include <iostream>

using namespace std;

void isMonotonic(int tab[], int length);

main()
{
    int tab[] = {9,8,7,6,5,5,6,7,8,9};
    int tab1[] = {1,2,3,4,5,6,7,8,9,10};
    int tab2[] = {10,9,8,7,6,5,4,3,2,1};
    int tab3[] = {1,2,2,2,5,6,7,8,9,10};
    int tab4[] = {9,8,7,6,5,6,7,8,9,10};
    int tab5[] = {10,9,8,7,6,5,5,5,4,3};

    isMonotonic(tab, 10);
    isMonotonic(tab1, 10);
    isMonotonic(tab2, 10);
    isMonotonic(tab3, 10);
    isMonotonic(tab4, 10);
    isMonotonic(tab5, 10);

    return 0;
}

void isMonotonic(int tab[], int length)
{
    int increasing = 0;
    int decreasing = 0;
    int constant = 0;

    for (int i = 0; i < length - 1; i++)
    {
        if(tab[i] < tab[i+1])
        {
            increasing++;
        }
        else if(tab[i] == tab[i+1])
        {
            constant++;
        }
        else
        {
            decreasing++;
        }
    }

    if(increasing == 9){
        cout << "Array is increasing" << endl;
    }else if(decreasing == 9){
        cout << "Array is decreasing" << endl;
    }else if(constant == 9){
        cout << "Array is constant" << endl;
    }else if(decreasing == 0){
        cout << "Array is non-decreasing" << endl;
    }else if(increasing == 0){
        cout << "Array is non-increasing" << endl;
    }else if(constant == 0){
        cout << "Array is non-monotonic" << endl;
    }else{
        cout << "Array is monotonic" << endl;
    }
}
