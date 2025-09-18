//Pattern Star

#include <iostream>

int main() {
    // Define the height of the triangle (number of rows)
    const int height = 5;

    // --- Pattern Logic ---

    // 1. Outer loop: Iterates through each row, counting down from 5 to 1.
    // 'i' represents the number of stars to print in the current row.
    for (int i = height; i >= 1; --i) {
        
        // 2. Inner loop: This loop prints the stars for the current row.
        // It runs 'i' times. As 'i' decreases, so does the number of stars.
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        
        // 3. Newline: After the inner loop finishes, move to the next line.
        std::cout << std::endl;
    }

    return 0;
}

