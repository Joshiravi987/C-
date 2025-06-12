/*Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input*/
#include <iostream>
using namespace std;
// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);

void divide(double a, double b);
void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}
void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}
void divide(double a, double b) {
    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
