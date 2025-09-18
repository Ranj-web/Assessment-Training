/*a program to print all Prime numbers between two given numbers.*/

#include <iostream>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter two positive integers (lower and upper bounds): ";
    cin >> lower >> upper;

    if (lower <= 0 || upper <= 0 || lower >= upper) {
        cout << "Please enter valid positive integers with lower < upper." << endl;
        return 1;
    }

    cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;

    for (int num = lower; num <= upper; num++) {
        if (num < 2) continue; // Skip numbers less than 2

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