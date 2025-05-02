// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program calculates the sum of the harmonic series up to n

#include <iostream>

int main() {
    // Display greeting message
    std::cout << "Hello, welcome to the program that calculates the sum of "
              << "the harmonic series." << std::endl;
    std::cout << "Please enter an n value." << std::endl;

    int n = 0;

    // Loop until the user enters a valid positive integer
    while (n <= 0) {
        std::cout << "Enter a positive integer n: ";
        double user_number;
        std::cin >> user_number;

        // Check if input failed (not a number)
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            std::cin.clear();             // Clear error flag
            std::cin.ignore(1000, '\n');  // Discard invalid input
            continue;                     // Skip to the next iteration
        } else {
            // Remove the decimal part (just keep the whole number)
            n = static_cast<int>(user_number);

            // If user entered a decimal, inform them
            if (user_number != n) {
                std::cout <<
                "You entered a decimal. It has been rounded down to: "
                          << n << std::endl;
            }

            // If the number is less than or equal to 0, ask again
            if (n <= 0) {
                std::cout << "Please enter a positive integer greater than 0."
                          << std::endl;
                continue;  // Skip to the next iteration
            }
        }
    }

    // Now calculate the harmonic sum
    double sum = 0;
    int i = 1;

    while (i <= n) {
        sum = sum + 1.0 / i;
        i = i + 1;
    }

    std::cout << "The sum of the harmonic series is: " << sum << std::endl;

    return 0;
}
