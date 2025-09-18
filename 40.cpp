/*a program to check whether a given number is an Armstrong number or not.*/

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
    int n;
    std::cout << "Enter a number to check if it's an Armstrong number: ";
    std::cin >> n;

    // Check if the number is an Armstrong number using the helper function
    if (isArmstrong(n)) {
        std::cout << n << " is an Armstrong number." << std::endl;
    } else {
        std::cout << n << " is not an Armstrong number." << std::endl;
    }

    return 0;
}