/*a program to calculate sum of cubes of first N natural numbers*/

#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        sum += i * i * i; // Adding the cube of the ith natural number
    }

    cout << "The sum of the cubes of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}