/*a program to print first N terms of Fibonacci series.*/

#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1; // Print the first term
            continue;
        }
        if(i == 2) {
            cout << ", " << t2; // Print the second term
            continue;
        }
        nextTerm = t1 + t2; // Calculate the next term
        cout << ", " << nextTerm; // Print the next term
        t1 = t2; // Update t1 and t2 for the next iteration
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}

