//Pattern Star

#include <iostream>

int main() {
    // Define the height of the pyramid (number of rows)
    const int height = 5;

    // --- Pattern Logic ---

    // 1. Outer loop: Iterates through each row, but this time counting down.
    // 'i' represents the current row number, starting from the largest.
    for (int i = height; i >= 1; --i) {
        
        // 2. Inner loop for spaces: This loop prints the leading spaces.
        // The number of spaces increases as the row number 'i' decreases.
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }
        
        // 3. Inner loop for stars: This loop prints the stars for the current row.
        // The number of stars printed is determined by the current value of 'i'.
        for (int k = 1; k <= i; ++k) {
            std::cout << "* "; // Note the space after the star
        }
        
        // 4. Newline: After both inner loops finish, move to the next line.
        std::cout << std::endl;
    }

    return 0;
}

