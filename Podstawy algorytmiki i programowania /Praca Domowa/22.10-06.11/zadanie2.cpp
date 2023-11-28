#include <iostream>

using namespace std;

int main(){

        int fullBottles;
        int borrowedEmptyBottles;
        int myEmptyBottles;
        int promotionBottles;
        int numberOfEmptyBottlesReplacedForFullBottle = 3;

        cout << "Enter number of bottles you bought [1,200]" << endl;
        cin >> fullBottles;

        myEmptyBottles = fullBottles;

        while (myEmptyBottles > 0){
            if (myEmptyBottles % numberOfEmptyBottlesReplacedForFullBottle != 0) {
                borrowedEmptyBottles = numberOfEmptyBottlesReplacedForFullBottle - (myEmptyBottles % numberOfEmptyBottlesReplacedForFullBottle);
                promotionBottles = (myEmptyBottles + borrowedEmptyBottles) / numberOfEmptyBottlesReplacedForFullBottle;
                myEmptyBottles = promotionBottles-borrowedEmptyBottles;
            } else {
                promotionBottles = myEmptyBottles / numberOfEmptyBottlesReplacedForFullBottle;
                myEmptyBottles = promotionBottles;
            }
            fullBottles += promotionBottles;
        }

        cout << "Maximum number of milk you can drink is: " << fullBottles << " bottles" << endl;


    return 0;
}
