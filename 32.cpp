/*a program to find the Nth term of the Fibonacci series.*/

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

    if (n == 1) {
        cout << "Fibonacci Series: " << t1 << endl;
        return 0;
    }

    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2; // Calculate the next term
        cout << ", " << nextTerm; // Print the next term
        t1 = t2; // Update t1 and t2 for the next iteration
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}
