//a program to input a character from the user and print its ASCII code.

#include <iostream>
using namespace std;

int main(){

    char character;
    int ascii;

    cout<<"Enter a character: ";
    cin>>character;

    ascii=character;
    cout<<"ASCII of "<<character<<" is "<<ascii<<endl;

    return 0;
    
}