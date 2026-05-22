#include <iostream>
#include "input.h"
#include "judge.h"

int main() {
    std::cout << "ゲームを開始" << std::endl;

    
    int randomNumber = generateRandomNumber();

    bool isGameClear = false;

   
    while (!isGameClear)
    {
       
        int userInput = getUserInput();
        int result = compareNumbers(randomNumber, userInput);

        
        isGameClear = Result(result);


    }

    return 0;
}