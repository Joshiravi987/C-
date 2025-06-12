/*Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions*/
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter the marks of the students: ";
    cin >> marks;
    char grade;
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 50 && marks < 60) {
        grade = 'E';
    } else if (marks < 50 && marks >= 0) {
        grade = 'F';
    } else {
        cout << "Invalid marks entered." << endl;
        return 1; // Exit the program with an error code
    }
    cout << "Grade: " << grade << endl;
    return 0;
}