/*p a program that takes four numbers as input and prints the largest among them.*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, largest;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    largest = num1; // Assume num1 is the largest initially

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}