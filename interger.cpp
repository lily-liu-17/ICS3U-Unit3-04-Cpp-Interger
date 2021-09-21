// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This lets know if number is positive negative or zero

#include <iostream>
#include <random>


int main() {
    // This lets know if number is positive negative or zero
    int interger;

    // input
    std::cout << "Enter a integer: ";
    std::cin >> interger;

    // process and output
    if (interger > 0) {
        std::cout << interger << " is positive";
    } else if (interger < 0) {
        std::cout << interger << " is negative";
    } else if (interger == 0) {
        std::cout << interger << " is just zero!";
    }


    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
