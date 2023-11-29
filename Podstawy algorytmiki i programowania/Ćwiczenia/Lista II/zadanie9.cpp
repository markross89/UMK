#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;

    cout << "Please give the upper limit of the number range" << endl;
    cin >> n;

    int tab[n];
    int sqrtOfN = int (sqrt(n));



    for(int i = 0; i < n; i++){

        tab[i] = i + 1;
        tab[0] = 0;
    }

    for(int i = 1; i < sqrtOfN; i++){

        if(tab[i] == 0){

            continue;
        }

        for(int j = i + 1; j < n; j++){

           if((tab[j] % tab[i]) == 0){

                tab[j] = 0;
            }
        }
    }

     for(int i = 0; i < n; i++){

        if(tab[i] != 0){

           cout << tab[i] << " " ;
        }
    }

    return 0;
}
