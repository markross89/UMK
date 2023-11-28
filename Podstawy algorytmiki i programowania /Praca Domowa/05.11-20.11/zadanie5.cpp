#include <iostream>

using namespace std;

int robot(string instructions[], int position, int instructionIndex);

int main(){

    int numberOfInstructions;
    int position = 0;

    cout << "Please specify number of instructions" << endl;
    cin >> numberOfInstructions;

    string instructions[numberOfInstructions];
    string instruction;

    cin.ignore();

    for(int i = 0; i < numberOfInstructions; i++) {

        cout << "Please type " << i + 1 << " step instruction (LEFT, RIGHT, LIKE IN i (i = index of one of the previous step): ";
        getline(cin, instruction);

        instructions[i] = instruction;

        position = robot(instructions, position, i );
    }

    cout << position << endl;

    return 0;
}

int robot(string instructions[], int position, int instructionIndex){

    string currentInstruction = instructions[instructionIndex];

    if(currentInstruction.compare("LEFT") == 0){

        position--;

    }else if(currentInstruction.compare("RIGHT") == 0){

        position++;

    }else{

        string extractedStringNumber;
        int extractedNumber;

        for(int j = 0; j < currentInstruction.length(); j++){

            if(isdigit(currentInstruction[j])){

                extractedStringNumber += currentInstruction[j];
            }
        }

        extractedNumber = stoi(extractedStringNumber);
        currentInstruction = instructions[extractedNumber - 1];
        instructions[instructionIndex] = currentInstruction;
        position = robot(instructions, position, instructionIndex);
    }

    return position;
}
