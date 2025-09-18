/*a program to calculate factorial of a number*/

#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i; // Multiply i to the factorial
        }
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}