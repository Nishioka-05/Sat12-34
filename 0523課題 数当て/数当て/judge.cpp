#include "judge.h"
#include <iostream>

int compareNumbers(int randomNum, int inputNum) {
    if (inputNum > randomNum) {
        return 1; 
    }
    else if (inputNum < randomNum) {
        return -1; 
    }
    else {
        return 0; 
    }
}

bool Result(int judgeResult) {
    if (judgeResult == 1) {
        std::cout << "‘å‚«‚¢" << std::endl;
        return false; 
    }
    else if (judgeResult == -1) {
        std::cout << "¬‚³‚¢" << std::endl;
        return false;
    }
    else {
        std::cout << "ƒQ[ƒ€ƒNƒŠƒA" << std::endl;
        return true; 
    }
}