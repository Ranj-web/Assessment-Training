//Pattern Star

#include <iostream>

int main() {
    // Define the size (number of rows in one half of the pattern)
    const int size = 5;

    // --- Pattern Logic ---

    // 1. Upper Half of the Butterfly
    // This loop builds the top part, from 1 star on each side up to 'size' stars.
    for (int i = 1; i <= size; ++i) {
        
        // Left wing: Prints 'i' stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }

        // Middle spaces: Prints a decreasing number of spaces to create the gap.
        int spaces = 2 * (size - i);
        for (int j = 1; j <= spaces; ++j) {
            std::cout << " ";
        }

        // Right wing: Prints 'i' stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    // 2. Lower Half of the Butterfly (Inverted)
    // This loop builds the bottom part by counting down from 'size - 1'.
    for (int i = size - 1; i >= 1; --i) {

        // Left wing: Prints 'i' stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }

        // Middle spaces: Prints an increasing number of spaces.
        int spaces = 2 * (size - i);
        for (int j = 1; j <= spaces; ++j) {
            std::cout << " ";
        }

        // Right wing: Prints 'i' stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    return 0;
}
