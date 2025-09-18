/*a program to print all Prime numbers under 100.*/

#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers under 100 are: " << endl;

    for (int num = 2; num < 100; num++) {
        bool isPrime = true; // Assume the number is prime

        // Check for factors from 2 to the square root of num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; // Found a factor, so it's not prime
                break;
            }
        }

        if (isPrime) {
            cout << num << " "; // Print the prime number
        }
    }

    cout << endl; // New line after printing all prime numbers
    return 0;
}