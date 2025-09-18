//Star Pattern


#include <iostream>

int main() {
    // Define the height of the triangle (number of rows)
    const int height = 5;

    // --- Pattern Logic ---

    // 1. Outer loop: Iterates through each row, counting down from 5 to 1.
    // 'i' represents the number of stars to print in the current row.
    for (int i = height; i >= 1; --i) {
        
        // 2. Inner loop for spaces: This loop prints the leading spaces.
        // As 'i' gets smaller, (height - i) gets larger, printing more spaces.
        for (int j = 1; j <= height - i; ++j) {
            std::cout << "  "; // Two spaces to match the width of "* "
        }

        // 3. Inner loop for stars: This loop prints the stars for the current row.
        // It runs 'i' times. As 'i' decreases, so does the number of stars.
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }
        
        // 4. Newline: After all loops for a row are done, move to the next line.
        std::cout << std::endl;
    }

    return 0;
}


