//A program to calculate volume of a cuboid.

#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;
    cout<<"Enter length: ";
    cin>>length;

    cout<<"Enter width: ";
    cin>>width;

    cout<<"Enter height: ";
    cin>>height;

    volume= length*width*height;
    cout<<"The vgolume of the cuboid is "<<volume<<endl;

    return 0;
}