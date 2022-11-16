// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that finds the sum of a number of positive integers the user inputs

#include <iostream>
#include <string>

int chosenInteger;
int integerOfLoops;
int sumOfNumbers = 0;

int main() {
    // Finds the sum of a number of positive integers the user inputs

    try {
        std::string numberOfLoops;
        std::cout << "Enter the amount of integers you ";
        std::cout << "wish to enter to find the sum of only the positives: ";
        std::cin >> numberOfLoops;
        std::cout << std::endl;
        integerOfLoops = std::stoi(numberOfLoops);
        if (integerOfLoops > 0) {
            while (integerOfLoops != 0) {
                integerOfLoops = integerOfLoops - 1;
                std::string chosenNumber;
                std::cout << "Enter an integer: ";
                std::cin >> chosenNumber;
                chosenInteger = std::stoi(chosenNumber);
                if (chosenInteger >= 0 && integerOfLoops != 0) {
                    sumOfNumbers = sumOfNumbers + chosenInteger;
                    continue;
                } else if (chosenInteger < 0 && integerOfLoops != 0) {
                    continue;
                }
                sumOfNumbers = sumOfNumbers + chosenInteger;
                std::cout << std::endl;
                std::cout << "The sum of all of the positive integers is ";
                std::cout << sumOfNumbers << ".";
                std::cout << std::endl;
            }
        } else {
            std::cout << "This input isn't a positive integer.";
            std::cout << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Error: This input isn't an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
