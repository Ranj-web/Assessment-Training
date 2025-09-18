/*program to input three characters from the user
and display characters with their corresponding ASCII codes.*/

#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout<<"Enter three characters: ";
    cin>>ch1>>ch2>>ch3;

    cout<<"ASCII value of "<<ch1<<" is "<<int(ch1)<<endl;
    cout<<"ASCII value of "<<ch2<<" is "<<int(ch2)<<endl;
    cout<<"ASCII value of "<<ch3<<" is "<<int(ch3)<<endl;

    return 0;
}