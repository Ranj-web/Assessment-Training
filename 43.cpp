/*Star pattern*/

#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the pattern from the image
    const int rows = 4;
    const int cols = 6;

    // --- Pattern Logic ---

    // 1. Outer loop: This loop iterates through each row.
    for (int i = 0; i < rows; i++) {
        
        // 2. Inner loop: This loop iterates through the columns for the current row.
        for (int j = 0; j < cols; j++) {
            
            // 3. Conditional Check: Decide whether to print a star or a space.
            // Print a star if it's the first row (i == 0),
            // the last row (i == rows - 1),
            // the first column (j == 0),
            // or the last column (j == cols - 1).
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                cout << "* ";
            } else {
                // Otherwise, print empty spaces to hollow out the middle.
                // We use two spaces to keep the alignment with "* ".
                cout << "  ";
            }
        }
        
        // 4. Newline: After the inner loop finishes, move to the next line.
        cout <<endl;
    }

    return 0;
}

