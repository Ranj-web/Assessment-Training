/*a program to check whether a given number is there in the Fibonacci series or not.*/

#include <iostream>
#include <cmath> // Required for the sqrt() function

// A helper function to check if a number is a perfect square
bool isPerfectSquare(long long num) {
    if (num < 0) {
        return false;
    }
    long long root = round(sqrt(num)); // Calculate the integer root
    return root * root == num;         // Check if squaring the root gives back the number
}

int main() {
    int n;
    std::cout << "Enter a non-negative number to check: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << n << " is not a Fibonacci number." << std::endl;
        return 0;
    }
    
    // Using long long to prevent overflow when n is large, as n*n can exceed the limit of int
    long long expr1 = 5LL * n * n + 4;
    long long expr2 = 5LL * n * n - 4;

    // Check if either of the two expressions results in a perfect square
    if (isPerfectSquare(expr1) || isPerfectSquare(expr2)) {
        std::cout << n << " is a Fibonacci number. " << std::endl;
    } else {
        std::cout << n << " is not a Fibonacci number. " << std::endl;
    }

    return 0;
}