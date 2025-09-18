//Star Pattern

#include <iostream>

int main() {
    // Define the height of the pyramid (number of rows)
    const int height = 5;

    // --- Pattern Logic ---

    // 1. Outer loop: Iterates through each row, from 1 up to the height.
    // 'i' represents the current row number and also the number of stars in that row.
    for (int i = 1; i <= height; ++i) {
        
        // 2. Inner loop for spaces: This loop prints the leading spaces.
        // As 'i' gets larger, (height - i) gets smaller, printing fewer spaces.
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " "; // One space for alignment
        }

        // 3. Inner loop for stars: This loop prints the stars for the current row.
        // It runs 'i' times, so each row gets one more star than the last.
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }
        
        // 4. Newline: After all loops for a row are done, move to the next line.
        std::cout << std::endl;
    }

    return 0;
}

