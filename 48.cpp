//Star Pattern

#include <iostream>

int main() {
    // Define the height of the triangle (number of rows)
    const int height = 5;

    // --- Pattern Logic ---

    // 1. Outer loop: This loop iterates through each row, from 1 to 5.
    // 'i' represents the current row number.
    for (int i = 1; i <= height; ++i) {
        
        // 2. Inner loop: This loop prints the numbers for the current row.
        // It runs from 1 up to the current row number 'i'.
        for (int j = 1; j <= i; ++j) {
            
            // 3. Print the current column number 'j' followed by a space.
            std::cout << j << " ";
        }
        
        // 4. Newline: After the inner loop finishes printing all the numbers
        // for the current row, move to the next line.
        std::cout << std::endl;
    }

    return 0;
}

