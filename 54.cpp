//Star Pattern

#include <iostream>

int main() {
    // Define the height of the pyramid (number of rows)
    const int height = 5;

    // --- Pattern Logic ---

    // 1. Outer loop: Iterates through each row, from 1 up to the height.
    // 'i' represents the current row number.
    for (int i = 1; i <= height; ++i) {
        
        // 2. Inner loop for spaces: This prints leading spaces to center the numbers.
        // As 'i' increases, (height - i) decreases, so fewer spaces are printed.
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " "; // One space for alignment.
        }

        // 3. Inner loop for numbers: This loop prints the numbers for the current row.
        // It runs 'i' times (e.g., 3 times for row 3, printing 1 2 3).
        for (int k = 1; k <= i; ++k) {
            std::cout << k << " ";
        }
        
        // 4. Newline: After all loops for a row are done, move to the next line.
        std::cout << std::endl;
    }

    return 0;
}

