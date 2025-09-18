//A C++ program to find the average of three numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2,num3;
    float average;

    cout << "Enter three integers: ";
    cin>> num1>>num2>>num3;

    average = (num1 +num2+num3)/3;
    cout<<"The average number is: "<<average<<endl;

    return 0;
}