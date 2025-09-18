//Cirrcumference of circle

#include <iostream>
using namespace std;

int main() {
    float radius, circumference;
    const float PI= 3.14;

    cout<<"Enter the raduis of the circle: ";
    cin>>radius;

    circumference= 2*PI*radius;
    cout<<"The circumference of the circle is: ";
    cout<<circumference;

    return 0;
    
}
