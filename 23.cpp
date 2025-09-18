/*a program to calculate sum of first N even natural
numbers */

#include <iostream>
using namespace std;

int main(){
    int N, sum = 0;

    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        sum += 2 * i; // Adding the ith even number
    }

    cout << "The sum of the first " << N << " even natural numbers is: " << sum << endl;

    return 0;
}