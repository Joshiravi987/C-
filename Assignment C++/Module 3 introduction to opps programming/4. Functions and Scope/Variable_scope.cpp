/* Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.*/
#include <iostream>
using namespace std;

// Global variable
int globalVar = 50;

void displayVariables() {
    // Local variable
    int localVar = 20;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;
}

int main() {
    cout << "Global Variable (in main): " << globalVar << endl;
    displayVariables();
    return 0;
}