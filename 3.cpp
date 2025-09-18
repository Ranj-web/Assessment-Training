//A program to calculate simple interest.

#include <iostream>
using namespace std;
 int main() {
    float principal,rate, time, simpleInterest;

    cout << "Enter principal Amount: ";
    cin >> principal;
    cout << "Enter rate of Interest(%): ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    simpleInterest = (principal * rate * time)/ 100;
    cout << "The simple interest is: " << simpleInterest << endl;

    return 0;
 }