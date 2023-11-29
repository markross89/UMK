#include <iostream>
#include <ctime>

using namespace std;

void findTheGreatest(int numberOfElements);

int main(){

    int numberOfElements = 50;

        findTheGreatest(numberOfElements);

    return 0;
}

void findTheGreatest(int arraySize){

    int number;
    int tab[arraySize];
    int greatestNumber = 0;

    for(int i = 0; i < arraySize; i++){

        srand(time(NULL));
        number = (rand() % 999) + 1;
        tab[i] = number;

        if(number > greatestNumber){

            greatestNumber = number;
        }
    }

    cout << "Greatest number: " << greatestNumber << endl;
}


/*  srand(time(NULL)) or srand(time(0)) - time seed used for the rand function to create random numbers in each second of it's flow.
it is set to time(0) - start of Unix system - wich is a good starting point. it generates pseudo random numbers, wich are not completely random.
this is a simple way of producing random numbers, working ok only if program is not starting more than once in one second time slot.
 without this seed program will generate always the same number. It needs #include <ctime>  */
