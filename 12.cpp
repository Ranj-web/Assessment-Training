/*program that takes a person's age as input and classifies them into different age groups
(e.g., child, teenager, adult, senior)*/

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter the  age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age!" << endl;
    } else if (age <= 12) {
        cout << "You are a child." << endl;
    } else if (age <= 19) {
        cout << "You are a teenager." << endl;
    } else if (age <= 59) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior." << endl;
    }

    return 0;
}