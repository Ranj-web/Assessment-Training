// Printing Patterns

#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the pattern
    const int size = 5; // Use one variable for a square

    // --- Pattern Logic ---

    // 1. Outer loop: This loop iterates through each row.
    for (int i = 0; i < size; i++) {
        
        // 2. Inner loop: This loop prints the stars for the current row.
        for (int j = 0; j < size; j++) {
            // Print a star followed by a space for better formatting
            cout << " * ";
        }
        
        // 3. Newline: After the inner loop finishes (one row is complete),
        // move to the next line to start the next row.
        cout << std::endl;
    }

    return 0;
}

