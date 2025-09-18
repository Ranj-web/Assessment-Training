/*STAR Pattern*/

#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the pattern from the image
    const int rows = 4;
    const int cols = 6;

    // --- Pattern Logic ---

    // 1. Outer loop: This loop iterates through each row.
    // We start 'i' from 1 and go up to 'rows' to represent the row number.
    for (int i = 1; i <= rows; i++) {
        
        // 2. Inner loop: This loop iterates through the columns for the current row.
        for (int j = 0; j < cols; j++) {
            
            // 3. Print the number of the current row 'i'.
            cout << i << " ";
        }
        
        // 4. Newline: After the inner loop finishes printing the numbers for a row,
        // move to the next line.
        cout <<endl;
    }

    return 0;
}
