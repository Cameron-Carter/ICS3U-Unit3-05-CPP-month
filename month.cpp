// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program tells the user a month by number

#include <iostream>
#include <string>

int main() {
    // this function determines month from its number value
    int monthNumber;

    // Input
    std::cout << "Enter the number of a month: ";
    std::cin >> monthNumber;

    // Process and Output
    switch (monthNumber) {
        // I learned how to use int rather than char for switch case on:
        // https://www.guru99.com/c-switch-case-statement
        // .html#:~:text=Switch%20statement%20in%20C%20tests%20the%20value%20of
        // ,name%2Fnumber%20which%20is%20referred%20to%20as%20an%20identifier.

        case 1 :
            std::cout << "\nJanuary" << std::endl;
            break;
         case 2 :
            std::cout << "\nFebruary" << std::endl;
            break;
         case 3 :
            std::cout << "\nMarch" << std::endl;
            break;
         case 4 :
            std::cout << "\nApril" << std::endl;
            break;
         case 5 :
            std::cout << "\nMay" << std::endl;
            break;
         case 6 :
            std::cout << "\nJune" << std::endl;
         case 7 :
            std::cout << "\nJuly" << std::endl;
            break;
         case 8 :
            std::cout << "\nAugust" << std::endl;
            break;
         case 9 :
            std::cout << "\nSeptember" << std::endl;
            break;
         case 10 :
            std::cout << "\nOctober" << std::endl;
            break;
         case 11 :
            std::cout << "\nNovember" << std::endl;
            break;
        case 12 :
            std::cout << "\nDecember" << std::endl;
            break;
        default:
            std::cout << "\nInvalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
