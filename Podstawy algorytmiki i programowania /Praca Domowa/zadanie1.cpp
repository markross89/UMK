#include <iostream>

using namespace std;

int main(){

        int numberOne;
        int numberTwo;
        int tempNumber;
        int sumOfOddNumbers = 0;

        cout << "Enter two numbers [0,100]" << endl;
        cin >> numberOne >> numberTwo;

        if (numberOne>numberTwo){

            tempNumber = numberOne;
            numberOne = numberTwo;
            numberTwo = tempNumber;
         }

            for (int i = numberOne; i <= numberTwo; i++){

                if (i%2!=0){
                sumOfOddNumbers+=i;
                }
            }

        cout << "Sum of odd numbers: " << sumOfOddNumbers << endl;


    return 0;
}
