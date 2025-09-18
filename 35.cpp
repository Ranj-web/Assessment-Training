/*a program to calculate HCF of two numbers.*/

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

    cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}
