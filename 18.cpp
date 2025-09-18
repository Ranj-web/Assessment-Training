/*a program that takes three numbers as input and finds the middle (second largest) number.*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, middle;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)) {
        middle = num1;
    } else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3)) {
        middle = num2;
    } else {
        middle = num3;
    }

    cout << "The middle number is: " << middle << endl;

    return 0;
}
