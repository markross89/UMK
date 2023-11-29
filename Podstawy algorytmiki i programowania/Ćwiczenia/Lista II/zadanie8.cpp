#include <iostream>
#include <ctime>

using namespace std;

void bubbleSort(int tab[], int sizeOfArray);
void insertSort(int tab[], int sizeOfArray);
void selectionSort(int tab[], int sizeOfArray);
void countingSort(int tab[], int sizeOfArray, int range);

int main(){

    int n;

    cout << "Please give number of elements between 1 and 100" << endl;
    cin >> n;

    int tab[n];

    srand(time(NULL));

    cout << n << " random numbers: ";

    for(int i = 0; i < n; i++){

        tab[i] = (rand() % 100) + 1;

        cout << tab[i] << " ";
    }

    cout << endl;


    bubbleSort(tab, n);
    insertSort(tab, n);
    selectionSort(tab, n);

    int range = 100;

    countingSort(tab, n, range);

    return 0;
}

void bubbleSort(int tab[], int sizeOfArray){

    for(int i = 0; i < sizeOfArray; i++){

        for(int j = 0; j < sizeOfArray - 1; j++){

            if(tab[j] > tab[j + 1]){

                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    cout << "bubbleSort: ";

    for(int i = 0; i < sizeOfArray; i++){

        cout << tab[i] << " ";
    }

    cout << endl;
}

void insertSort(int tab[], int sizeOfArray){

    for(int i = 1; i < sizeOfArray; i++){

        for(int j = i-1; j >= 0; j--){

            if(tab[i] < tab[j]){

                int temp = tab[j];
                tab[j] = tab[i];
                tab[i] = temp;
            }
        }
    }

    cout << "insertSort: ";

    for(int i = 0; i < sizeOfArray; i++){

        cout << tab[i] << " ";
    }

    cout << endl;

}

void selectionSort(int tab[], int sizeOfArray){

    for(int i = 0; i < sizeOfArray - 1; i++){

        int tempIndex = i;

        for(int j = i + 1; j < sizeOfArray; j++){

            if(tab[tempIndex] > tab[j]){

                tempIndex = j;
            }
        }

        swap(tab[i], tab[tempIndex]);
    }

    cout << "selectionSort: ";

    for(int i = 0; i < sizeOfArray; i++){

        cout << tab[i] << " ";
    }

    cout << endl;
}

void countingSort(int tab[], int sizeOfArray, int range){

    int rangeTab[range] = {};
    int accumulativeSumTab[range];
    int sortedTab[sizeOfArray];

    for(int i = 0; i < sizeOfArray; i++){

            rangeTab[tab[i]]++;
    }

    for(int i = 1; i < range; i++){

            accumulativeSumTab[0] = rangeTab[0];
            accumulativeSumTab[i] = accumulativeSumTab[i-1] + rangeTab[i];
    }

    for(int i = sizeOfArray-1; i >= 0; i--){

        sortedTab[accumulativeSumTab[tab[i]] - 1] = tab[i];
        accumulativeSumTab[tab[i]]--;
    }

     cout << "countingSort: ";

    for(int i = 0; i < sizeOfArray; i++){

        cout << sortedTab[i] << " ";
    }

    cout << endl;


}
