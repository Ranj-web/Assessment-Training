/*program that takes a student's score (0-100) as
input and prints the corresponding grade (e.g., A, B, C, D, F) based on a grading scale.*/

#include <iostream>
using namespace std;

  int main(){
    int score;
    char grade;

    cout<<"Enter the score (0-100): ";
    cin>>score;

    if(score >= 90 && score <= 100){
        grade = 'A';
    }
    else if(score >= 80 && score < 90){
        grade = 'B';
    }
    else if(score >= 70 && score < 80){
        grade = 'C';
    }
    else if(score >= 60 && score < 70){
        grade = 'D';
    }
    else if(score >= 0 && score < 60){
        grade = 'F';
    }
    else{
        cout<<"Invalid score!"<<endl;
        return 1;
    }

    cout<<"The grade is: "<<grade<<endl;

    return 0;
  }