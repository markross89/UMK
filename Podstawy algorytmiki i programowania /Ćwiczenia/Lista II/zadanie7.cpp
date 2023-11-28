#include <iostream>

using namespace std;

int main(){

    int tab[5][5];
    int counter = 1;
    int sumOfFirstDiagonal = 0;
    int sumOfSecondDiagonal = 0;
    int sumOfAreaAboveFirstDiagonal = 0;
    int sumOfAreaBelowFirstDiagonal = 0;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            tab[i][j] = counter;
            counter++;

            if(tab[i][j] / 10 == 0){

                cout << " " << tab[i][j] << " ";

            }else{

                cout << tab[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << endl;




    for(int i = 0; i < 5; i++){

           sumOfFirstDiagonal += tab[i][i];
     }

     cout << "Sum of first diagonal: " << sumOfFirstDiagonal << endl;

      for(int i = 0; i < 5; i++){

           sumOfSecondDiagonal += tab[i][(5 - i) - 1];
     }

     cout << "Sum of second diagonal: " << sumOfSecondDiagonal << endl;

      for(int i = 0; i < 4; i++){

        for(int j = i + 1; j < 5; j++ )

           sumOfAreaAboveFirstDiagonal += tab[i][j];
     }

     cout << "Sum of area above first diagonal: " << sumOfAreaAboveFirstDiagonal << endl;

     for(int i = 1; i < 5; i++){

        for(int j = 0; j < i; j++ )

           sumOfAreaBelowFirstDiagonal += tab[i][j];
     }

     cout << "Sum of area below first diagonal: " << sumOfAreaBelowFirstDiagonal << endl;

    return 0;
}


