/*Star Pattern*/

#include <iostream>

int main() {
    // Define the dimensions of the pattern from the image
    const int rows = 4;
    const int cols = 6;

    // --- Pattern Logic ---

    // 1. Outer loop: This loop iterates through each row.
    for (int i = 0; i < rows; ++i) {
        
        // 2. Inner loop: This loop iterates through the columns.
        // We start 'j' from 1 and go up to 'cols' to represent the column number.
        for (int j = 1; j <= cols; ++j) {
            
            // 3. Print the number of the current column 'j'.
            std::cout << j << " ";
        }
        
        // 4. Newline: After the inner loop finishes printing the numbers for a row,
        // move to the next line.
        std::cout << std::endl;
    }

    return 0;
}

