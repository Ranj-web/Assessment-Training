/*a program to check whether two given numbers are co-prime numbers or not.*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, hcf;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers only." << endl;
        return 1;
    }

    // Start from the minimum of the two numbers
    hcf = (num1 < num2) ? num1 : num2;

    // Keep decrementing hcf until it divides both num1 and num2
    while (true) {
        if (num1 % hcf == 0 && num2 % hcf == 0) {
            break; // Found the HCF
        }
        hcf--;
    }

    if (hcf == 1) {
        cout << num1 << " and " << num2 << " are co-prime numbers. " << endl;
    } else {
        cout << num1 << " and " << num2 << " are not co-prime numbers. " << endl;
    }

    return 0;
}
