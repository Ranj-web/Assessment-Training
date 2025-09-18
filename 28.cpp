/*a program to count digits in a given number*/

#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        count = 1; // Special case for 0
    } else {
        while (number != 0) {
            number /= 10; // Remove the last digit
            count++;      // Increment the count
        }
    }

    cout << "The number of digits is: " << count << endl;

    return 0;
}