// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program is the date approval program

#include <iostream>
#include <string>

int main()  {
    // this function can tell the user if they are allowed to date

    std::string ageString;
    int ageNumber;

    std::cout << "There is a grandmother who will only approve you dating her"
              << " grandchild if you are at a certain age." << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "Type in your age: " << std::endl;
    std::cin >> ageString;
    std::cout << "" << std::endl;


    // process and output
    try {
        ageNumber = std::stoi(ageString.c_str());

        if (ageNumber > 25 && ageNumber < 40) {
            std::cout << "You are allowed to date her grandchild!!"
                      << std::endl;
        } else {
            std::cout << "You are not allowed to date her grandchild."
                      << " You must be older than 25 and younger than 40"
                      << std::endl;
        }
        }
    catch (std::invalid_argument) {
        std::cout << "This is not a number!" << std::endl;
    }
}
