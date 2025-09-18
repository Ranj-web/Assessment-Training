/*a program to find next Prime number of a given number.*/

#include <iostream>
#include <cmath> // Required for the sqrt() function

// A helper function to check if a number is prime
bool isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return false;
    }

    // Check for factors from 2 up to the square root of the number.
    // This is an optimization: if a number has a factor larger than its square root,
    // it must also have a smaller one that we would have already found.
    for (int i = 2; i * i <= num; ++i) {
        // If the number is divisible by any 'i', it is not prime
        if (num % i == 0) {
            return false;
        }
    }

    // If no factors were found, the number is prime
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number to find the next prime: ";
    std::cin >> n;

    // Start checking from the very next integer
    int nextNumber = n + 1;

    // Loop forever until we find the prime and break out
    while (true) {
        // Use our helper function to check the current number
        if (isPrime(nextNumber)) {
            std::cout << "The next prime number after " << n << " is " << nextNumber << "." << std::endl;
            break; // Exit the loop once the prime is found
        }
        // If it's not prime, increment and check the next one
        nextNumber++;
    }

    return 0;
}