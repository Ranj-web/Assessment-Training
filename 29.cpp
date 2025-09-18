/*a program to check whether a given number is a Prime number or not*/

#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= number; i++) { // Check divisibility from 2 to sqrt(number)
            if (number % i == 0) {
                isPrime = false; // Found a divisor, not a prime
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}