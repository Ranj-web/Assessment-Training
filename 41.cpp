/*a program to print all Armstrong numbers unde 1000*/

#include <iostream>
#include <cmath> // Required for the pow() function

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num; // Store the original number for comparison
    int sum = 0;          // Variable to store the sum of cubes of digits

    // Loop to extract each digit and calculate the sum of cubes
    while (num > 0) {
        int digit = num % 10;          // Get the last digit
        sum += std::pow(digit, 3);     // Add the cube of the digit to the sum
        num /= 10;                     // Remove the last digit
    }

    // An Armstrong number is one where the sum of the cubes of its digits equals the number itself
    return sum == originalNum;
}

int main() {
    std::cout << "Armstrong numbers under 1000 are:" << std::endl;

    // Loop through all numbers from 1 to 999
    for (int i = 1; i < 1000; ++i) {
        // Check if the current number is an Armstrong number using the helper function
        if (isArmstrong(i)) {
            std::cout << i << " "; // Print the Armstrong number
        }
    }
    std::cout << std::endl; // New line after printing all Armstrong numbers

    return 0;
}