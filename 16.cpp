/*a program that converts a temperature from
Fahrenheit to Celsius or vice versa based on user input. The
user should specify the type of conversion.*/

#include <iostream>
using namespace std;

int main() {
    char choice;
    float temperature, convertedTemperature;

    cout << "Enter 'F' to convert Fahrenheit to Celsius or 'C' to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << " Fahrenheit is " << convertedTemperature << " Celsius." << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << " Celsius is " << convertedTemperature << " Fahrenheit." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}