/*a program to reverse a given number*/

#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append it to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}