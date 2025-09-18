/*a program that takes a start year and an end year
from the user and prints all the leap years in that range.*/

#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;

    cout << "Enter the start year: ";
    cin >> startYear;
    cout << "Enter the end year: ";
    cin >> endYear;

    if (startYear > endYear) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    cout << "Leap years between " << startYear << " and " << endYear << " are:" << endl;
    for (int year = startYear; year <= endYear; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << endl;
        }
    }

    return 0;
}