/* a program to input an ASCII code from the user and
print its corresponding character*/

#include <iostream>
using namespace std;
int main(){

    int ascii;
    char character;

    cout<<"Enter an ASCII code: ";
    cin>>ascii;

    character=ascii;
    cout<<"Character for ASCII code "<<ascii<<" is "<<character<<endl;

    return 0;
    
}