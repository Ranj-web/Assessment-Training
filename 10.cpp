/*take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM”*/

#include <iostream>
using namespace std;
int main(){

    int hour, minute;

    cout<<"Enter time in HH:MM format: ";
    scanf("%d:%d", &hour, &minute);

    cout<<"Hour - "<<hour<<", Minute - "<<minute<<endl;

    return 0;
}