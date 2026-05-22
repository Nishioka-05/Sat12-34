#include "input.h"
#include <iostream>
#include <random>

int generateRandomNumber() {
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, 9); // 0～9

    return dist(gen);
}

int getUserInput() {
    int inputNumber;
    std::cout << "0〜9の間で数値を入力: ";
    std::cin >> inputNumber;
    return inputNumber;
}