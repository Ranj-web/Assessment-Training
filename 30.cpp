/*a program to calculate LCM of two numbers*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, lcm;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers only." << endl;
        return 1;
    }

    // Start from the maximum of the two numbers
    lcm = (num1 > num2) ? num1 : num2;

    // Keep incrementing lcm until it is divisible by both num1 and num2
    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break; // Found the LCM
        }
        lcm++;
    }

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}