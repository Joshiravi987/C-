/* Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions.*/
#include <iostream>
using namespace std;
class Calculator {
    public:
    // Function for addition
    double add(double a, double b) {
        return a + b;
    }

    // Function for subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Function for multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Function for division
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cerr << "Division by zero error!" << endl;
            return 0; // Return 0 in case of division by zero
        }
    }
};