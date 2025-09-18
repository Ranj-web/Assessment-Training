/*Star Pattern*/

#include <iostream>

int main() {
    // Define the dimensions for the letter 'S' pattern
    // Based on the image, it looks like a 7x7 grid
    const int height = 7;
    const int width = 7;

    // --- Pattern Logic ---

    // 1. Outer loop: Iterates through each row.
    for (int i = 0; i < height; ++i) {
        
        // 2. Inner loop: Iterates through each column for the current row.
        for (int j = 0; j < width; ++j) {
            
            // 3. Conditional Check: Decide where to print a star.
            // This logic builds the 'S' shape.
            if (
                // Top bar of the 'S'
                i == 0 || 
                // Middle bar of the 'S'
                i == height / 2 || 
                // Bottom bar of the 'S'
                i == height - 1 ||
                // Left vertical line in the top half
                (j == 0 && i > 0 && i < height / 2) ||
                // Right vertical line in the bottom half
                (j == width - 1 && i > height / 2 && i < height - 1)
            ) {
                std::cout << "* ";
            } else {
                // Print spaces for the empty parts
                std::cout << "  ";
            }
        }
        
        // 4. Newline: Move to the next line after finishing a row.
        std::cout << std::endl;
    }

    return 0;
}

